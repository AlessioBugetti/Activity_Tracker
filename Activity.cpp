//
// Created by alessio on 29/05/19.
//

#include "Activity.h"

Activity::Activity(std::string d, Time s, Time e) : description(d), start(s), end(e) {}

const std::string& Activity::getDescription() const {
    return description;
}

const int Activity::getStartHours() const {
    return start.getHours();
}
const int Activity::getStartMinutes() const {
    return start.getMinutes();
}
const int Activity::getEndHours() const {
    return end.getHours();
}
const int Activity::getEndMinutes() const {
    return end.getMinutes();
}