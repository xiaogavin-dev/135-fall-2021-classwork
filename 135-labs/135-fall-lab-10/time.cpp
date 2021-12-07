#include <iostream> 
#include <string>
#include "time.h"

std::string Time::printTime() { 
    return std::to_string(this->h) + ":" + std::to_string(this->m);
}

int Time::minutesSinceMidnight() { 
    return (this->h * 60) + this->m; 
}

int Time::minutesUntil(Time first, Time second) { 
    if(first.h <= second.h) { 
        if(first.m <= second.m) {
            return ((second.h - first.h) * 60) + (second.m - first.m);
        } else { 
            int min = 60 + second.m - first.m; 
            int hour = second.h - (first.h + 1); 
            return (hour * 60) + min;  
        }
    } else if(first.h >= second.h) { 
        if(first.m >= second.m) { 
            return -1 * (((first.h - second.h) * 60) +  (first.m - second.m));
        } else { 
            int min = 60 + first.m - second.m; 
            int hour = first.h - (second.h + 1); 
            return -1 * ((hour * 60) + min);
        }
    }

    return 0;
}

void Time::addMinutes(Time t, int min) { 
    int hours = min / 60; 
    int mins = min % 60; 

    this->h += hours;
    this->m += mins;

    if(this->m >= 60) { 
        this->m = this->m % 60; 
        this->h++; 
    }
}