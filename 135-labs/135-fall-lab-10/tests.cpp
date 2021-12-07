#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

Time t1 = {10, 30};
Time t2 = {13, 40}; 
Time t3 =  {5, 25};
Time t4 =  {0, 17};
Time t5 =  {6, 55};

Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};
Movie movie3 = {"Where's Waldo?", COMEDY, 5};
Movie movie4 = {"Your Name", ROMANCE, 112};
Movie movie5 = {"Venom", ACTION, 112}; 

TimeSlot morning = {movie1, {9, 15}};  
TimeSlot daytime = {movie2, {12, 15}}; 
TimeSlot evening = {movie3, {16, 45}}; 
TimeSlot conflicting1 = {movie4, {12, 15}}; 
TimeSlot conflicting2 = {movie5, {16, 30}};

int toMinutes(Time t) { 
    return (t.h * 60) + t.m; 
}

TEST_CASE("TASK A") { 
    SUBCASE("int minutesSinceMidnight()") { 
        CHECK(t1.minutesSinceMidnight() == 630); // 10 * 60 + 30
        CHECK(t2.minutesSinceMidnight() == 820); // 13 * 60 + 40
        CHECK(t3.minutesSinceMidnight() == 325); // 5 * 60 + 25
        CHECK(t4.minutesSinceMidnight() == 17);  // 0 * 60 + 17
        CHECK(t5.minutesSinceMidnight() == 415); // 6 * 60 + 55
    }

    SUBCASE("int minutesUntil()") { 
        CHECK(t1.minutesUntil(t1, t2) == toMinutes(t2) - toMinutes(t1)); 
        CHECK(t2.minutesUntil(t2, t3) == toMinutes(t3) - toMinutes(t2));
        CHECK(t2.minutesUntil(t2, t1) == toMinutes(t1) - toMinutes(t2));
        CHECK(t2.minutesUntil(t5, t3) == toMinutes(t3) - toMinutes(t5));
        CHECK(t2.minutesUntil(t4, t4) == toMinutes(t4) - toMinutes(t4));
    }
}

TEST_CASE("TASK B") { 
    SUBCASE("void addMinutes(Time time0, int min)") { 
        SUBCASE("TIME 1: add 75 mins") { 
            t1.addMinutes(t1, 75); // 10 : 30 + 1 : 15 = 11 : 45 
            CHECK(t1.h == 11);
            CHECK(t1.m == 45); 
            t1 = {10, 30}; 
        }

        SUBCASE("TIME 2: add 11 mins") { 
            t2.addMinutes(t2, 11); // 13 : 40 + 0 : 11 = 13 : 51
            CHECK(t2.h == 13);
            CHECK(t2.m == 51); 
            t2 = {13, 40}; 
        }

        SUBCASE("TIME 3: add 83 mins") { 
            t3.addMinutes(t3, 83); // 5 : 25 + 83 = 5:25 + 1:23 = 6:48
            CHECK(t3.h == 6);
            CHECK(t3.m == 48); 
            t3 = {5, 25}; 
        }

        SUBCASE("TIME 4: add 43 mins") { 
            t4.addMinutes(t4, 43); // 00:17 + 00:43 = 1:00
            CHECK(t4.h == 1);
            CHECK(t4.m == 0); 
            t4 = {0, 17}; 
        }

        SUBCASE("TIME 5: subtract 21 mins") { 
            t5.addMinutes(t5, -21); // 6:55 + -0:21 = 6:34
            CHECK(t5.h == 6);
            CHECK(t5.m == 34); 
            t5 = {6, 55}; 
        }
    }

    // Back to the Future COMEDY (116 min)
    // Black Panther ACTION (134 min)
    // Where's Waldo? COMEDY (5 min)
    // Your Name ROMANCE (112 min)
    // Venom ACTION (112 min)
    SUBCASE("std::string printMovie(Movie m)") { 
        CHECK(movie1.printMovie() == "Back to the Future COMEDY (116 min)");
        CHECK(movie2.printMovie() == "Black Panther ACTION (134 min)"); 
        CHECK(movie3.printMovie() == "Where's Waldo? COMEDY (5 min)"); 
        CHECK(movie4.printMovie() == "Your Name ROMANCE (112 min)"); 
        CHECK(movie5.printMovie() == "Venom ACTION (112 min)"); 
    }
}

TEST_CASE("TASK C") { 
    // Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
    // Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]
    // Where's Waldo? COMEDY (5 min) [starts at 16:45, ends by 16:50]
    // Your Name ROMANCE (112 min) [starts at 12:15, ends by 14:07]
    // Venom ACTION (112 min) [starts at 16:30, ends by 18:22]
    SUBCASE("std::string printTimeSlot(Timeslot ts)") { 
        CHECK(morning.printTimeSlot() == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
        CHECK(daytime.printTimeSlot() == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
        CHECK(evening.printTimeSlot() == "Where's Waldo? COMEDY (5 min) [starts at 16:45, ends by 16:50]");
        CHECK(conflicting1.printTimeSlot() == "Your Name ROMANCE (112 min) [starts at 12:15, ends by 14:07]");
        CHECK(conflicting2.printTimeSlot() == "Venom ACTION (112 min) [starts at 16:30, ends by 18:22]");
    }
}

TEST_CASE("TASK D") {
    SUBCASE("TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)") {
    // Black Panther ACTION (134 min) [starts at 11:11, ends by 13:25]
    // Where's Waldo? COMEDY (5 min) [starts at 14:29, ends by 14:34]
    // Your Name ROMANCE (112 min) [starts at 16:50, ends by 18:42]
    // Venom ACTION (112 min) [starts at 14:29, ends by 16:21]
    // Back to the Future COMEDY (116 min) [starts at 14:29, ends by 16:25]
        SUBCASE("TRIAL 1") { 
            TimeSlot temp1 = morning.scheduleAfter(morning, movie2); 
            CHECK(temp1.printTimeSlot() == "Black Panther ACTION (134 min) [starts at 11:11, ends by 13:25]");
        }

        SUBCASE("TRIAL 2") { 
            TimeSlot temp2 = daytime.scheduleAfter(daytime, movie3); 
            CHECK(temp2.printTimeSlot() == "Where's Waldo? COMEDY (5 min) [starts at 14:29, ends by 14:34]");
        }

        SUBCASE("TRIAL 3") { 
            TimeSlot temp3 = evening.scheduleAfter(evening, movie4); 
            CHECK(temp3.printTimeSlot() == "Your Name ROMANCE (112 min) [starts at 16:50, ends by 18:42]");
        }

        SUBCASE("TRIAL 4") { 
            TimeSlot temp4 = conflicting1.scheduleAfter(daytime, movie5); 
            CHECK(temp4.printTimeSlot() == "Venom ACTION (112 min) [starts at 14:29, ends by 16:21]");
        }

        SUBCASE("TRIAL 5") { 
            TimeSlot temp5 = conflicting2.scheduleAfter(daytime, movie1); 
            CHECK(temp5.printTimeSlot() == "Back to the Future COMEDY (116 min) [starts at 14:29, ends by 16:25]");
        }
    }
}

TEST_CASE("TASK E") { 
    SUBCASE("bool timeOverlap(TimeSlot ts1, TimeSlot ts2)") { 
        CHECK(daytime.timeOverlap(daytime, morning) == false);
        CHECK(daytime.timeOverlap(daytime, conflicting1) == true);
        CHECK(daytime.timeOverlap(daytime, conflicting1) == true);
        CHECK(daytime.timeOverlap(daytime, conflicting2) == false);
        CHECK(daytime.timeOverlap(daytime, evening) == false);
    }
}