//
// Created by alessio on 23/05/19.
//

#include <stdexcept>
#include "Time.h"

Time::Time(int h, int m) : hours(h), minutes(m){
    if (h >= 24 || h<0)
        throw std::domain_error("ore non valide");
    if( m>59 || m<0)
        throw std::domain_error("minuti non validi");
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setHours(const int &h) {
    hours = h;
}

void Time::setMinutes(const int &m) {
    minutes = m;
}