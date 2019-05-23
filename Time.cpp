//
// Created by alessio on 23/05/19.
//

#include "Time.h"

Time::Time(int h, int m) : hours(h), minutes(m){
    if (h >= 24 || h<0)
        hours=0;
    if( m>59 || m<0)
        minutes=50;
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}