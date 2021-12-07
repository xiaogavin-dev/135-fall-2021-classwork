#pragma once
#include <string>

class Time { 
public:
    std::string printTime();
    // Prints Time
    int minutesSinceMidnight();
    // Returns time since 00:00
    int minutesUntil(Time first, Time second);
    // Returns times from earlier to later 
    void addMinutes(Time t, int min);
    // Adds minutes onto time 

    int h;
    int m;
};

