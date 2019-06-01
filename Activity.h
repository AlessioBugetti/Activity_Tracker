//
// Created by alessio on 29/05/19.
//

#ifndef ACTIVITY_TRACKER_ACTIVITY_H
#define ACTIVITY_TRACKER_ACTIVITY_H

#include "Time.h"
#include <string>

class Activity {
public:
    Activity(std::string d, Time s, Time e);

    const std::string &getDescription() const;

    const int getStartHours() const;

    const int getStartMinutes() const;

    const int getEndHours() const;

    const int getEndMinutes() const;

    void setDescription(const std::string &d);

    void setStartMinutes(const int &startMinutes);

    void setEndMinutes(const int &endMinutes);

    void setStartHours(const int &startHours);

    void setEndHours(const int &endHours);

private:
    std::string description;
    Time start;
    Time end;
};


#endif //ACTIVITY_TRACKER_ACTIVITY_H
