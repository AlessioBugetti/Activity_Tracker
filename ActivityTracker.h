//
// Created by alessio on 01/06/19.
//

#ifndef ACTIVITY_TRACKER_ACTIVITYTRACKER_H
#define ACTIVITY_TRACKER_ACTIVITYTRACKER_H

#include <map>
#include "Date.h"
#include "Activity.h"

class ActivityTracker {
public:
    ActivityTracker();

    void insertActivity(Date &d, Activity &a);

    void deleteActivity(Activity &a);

    bool findActivity(Activity &a) const;

    const int getStartHours(Activity &a) const;

    const int getStartMinutes(Activity &a) const;

    const int getEndHours(Activity &a) const;

    const int getEndMinutes(Activity &a) const;

    const std::string &getDescription(Activity &a) const;

    bool isEmpty() const;

    void lookActivities(Date d) const;

private:
    std::multimap<Date, Activity, DateComparator> tracker;
};


#endif //ACTIVITY_TRACKER_ACTIVITYTRACKER_H
