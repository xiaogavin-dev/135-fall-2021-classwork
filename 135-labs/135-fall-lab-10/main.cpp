#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

int main() { 
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

    std::cout << "Task A" << std::endl; 
    std::cout << "From time " << t1.printTime() << " to time " << t2.printTime() << " is " << t1.minutesUntil(t1, t2) << " mins" << std::endl;
    std::cout << "Time " << t5.printTime() << " from midnight is " << t5.minutesSinceMidnight() << " mins" << std::endl;
    std::cout << "\n=============================================" << std::endl;

    std::cout << "Task B" << std::endl;
    t1.addMinutes(t1, 45);
    std::cout << "Adding 45 mins onto time t1: 10:30: " << t1.printTime() << std::endl;
    std::cout << "movie1.printMovie(): " << movie1.printMovie() << std::endl;
    std::cout << "movie2.printMovie(): " << movie2.printMovie() << std::endl;
    // std::cout << movie3.printMovie() << std::endl;
    // std::cout << movie4.printMovie() << std::endl;
    // std::cout << movie5.printMovie() << std::endl;

    std::cout << "\n=============================================" << std::endl;
    std::cout << "Task C" << std::endl;
    std::cout << "morning.printTimeSlot(): " << morning.printTimeSlot() << std::endl;
    std::cout << "daytime.printTimeSlot(): " << daytime.printTimeSlot() << std::endl;
    // std::cout << evening.printTimeSlot() << std::endl; 
    // std::cout << conflicting1.printTimeSlot() << std::endl;
    // std::cout << conflicting2.printTimeSlot() << std::endl;

    std::cout << "\n=============================================" << std::endl;
    std::cout << "Task D" << std::endl;
    TimeSlot temp1 = morning.scheduleAfter(morning, movie2); 
    std::cout << "morning.scheduleAfter(morning, movie2);" << std::endl;
    std::cout << "temp1.printTimeSlot(): " << temp1.printTimeSlot() << std::endl;
    TimeSlot temp2 = daytime.scheduleAfter(daytime, movie3);
    std::cout << "daytime.scheduleAfter(daytime, movie3);" << std::endl;
    std::cout << "temp2.printTimeSlot(): " << temp2.printTimeSlot() << std::endl; 

    // TimeSlot temp3 = evening.scheduleAfter(evening, movie4); 
    // TimeSlot temp4 = conflicting1.scheduleAfter(daytime, movie5); 
    // TimeSlot temp5 = conflicting2.scheduleAfter(daytime, movie1);

    // std::cout << temp3.printTimeSlot() << std::endl; 
    // std::cout << temp4.printTimeSlot() << std::endl;
    // std::cout << temp5.printTimeSlot() << std::endl;

    std::cout << "\n=============================================" << std::endl;
    std::cout << "Task E" << std::endl;
    std::cout << "daytime.timeOverlap(daytime, morning) should return false: " << daytime.timeOverlap(daytime, morning) << std::endl;
    std::cout << "daytime.timeOverlap(daytime, conflicting1) should return true: " << daytime.timeOverlap(daytime, conflicting1) << std::endl;
    // std::cout << daytime.timeOverlap(daytime, conflicting1) << std::endl;
    // std::cout << daytime.timeOverlap(daytime, conflicting2) << std::endl;
    // std::cout << daytime.timeOverlap(daytime, evening) << std::endl;
    return 0; 
}