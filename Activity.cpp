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

void Activity::setStartMinutes(const int &startMinutes) {
    start.setMinutes(startMinutes);
}

void Activity::setStartHours(const int &startHours) {
    start.setHours(startHours);
}

void Activity::setEndMinutes(const int &endMinutes) {
    end.setMinutes(endMinutes);
}

void Activity::setEndHours(const int &endHours) {
    end.setHours(endHours);
}

void Activity::setDescription(const std::string &d) {
    description=d;
}