#include "timeslot.h"
#include "movie.h"
#include "time.h"
#include <iostream>
#include <string> 

std::string TimeSlot::printTimeSlot() { 
    // Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
    // Movie movie1 = {"Back to the Future", COMEDY, 116};
    // TimeSlot morning = {movie1, {9, 15}}; 

    std::string g;
    switch (this->movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }

    Time new_time = this->startTime;
    new_time.addMinutes(new_time, this->movie.duration);
    std::string mins = std::to_string(new_time.m);

    if(new_time.m < 10) { 
        mins = "0" + mins;
    }

    return this->movie.title + " " + g + " (" + std::to_string(this->movie.duration) + " min)" + " [starts at " + std::to_string(this->startTime.h) + ":" + std::to_string(this->startTime.m) + ", ends by " + std::to_string(new_time.h) + ":" + mins + "]";
}

TimeSlot TimeSlot::scheduleAfter(TimeSlot ts, Movie nextMovie) { 
    TimeSlot after; 
    after.movie = nextMovie;

    after.startTime = ts.startTime; 
    after.startTime.addMinutes(after.startTime ,ts.movie.duration);

    return after;
}

bool TimeSlot::timeOverlap(TimeSlot ts1, TimeSlot ts2) { 
    // The function should return true if the two time slots overlap, otherwise return false. 
    // (Take into account the starting times of the time slots and the duration of the scheduled movies.)

    // ts1.startTime -- gives startin time of the movie

    if(ts1.startTime.minutesUntil(ts1.startTime, ts2.startTime) > 0) { // Returns positive, meaning ts1 starts first.  
        if(ts1.startTime.minutesUntil(ts1.startTime, ts2.startTime) < ts1.movie.duration) {
            return true;
        }     
    } else if(abs(ts1.startTime.minutesUntil(ts1.startTime, ts2.startTime)) < ts2.movie.duration) { 
        return true;
    }
    
    return false; 
} 