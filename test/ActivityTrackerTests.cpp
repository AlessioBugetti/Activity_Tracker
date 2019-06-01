//
// Created by alessio on 01/06/19.
//

#include "gtest/gtest.h"

#include "../ActivityTracker.h"

TEST(ActivityTracker, ActivityTrackerConstructor) {
    ActivityTracker at;
    ASSERT_TRUE(at.isEmpty());
}

TEST(ActivityTracker, InsertActivity) {
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    Date d(2018, Months::Gennaio, 1);
    ActivityTracker at;
    at.insertActivity(d, a);
    ASSERT_FALSE(at.isEmpty());
    ASSERT_TRUE(at.findActivity(a));
    ASSERT_EQ("Doing something", at.getDescription(a));
    ASSERT_EQ(8, at.getStartHours(a));
    ASSERT_EQ(15, at.getStartMinutes(a));
    ASSERT_EQ(9, at.getEndHours(a));
    ASSERT_EQ(30, at.getEndMinutes(a));
}

TEST(ActivityTracker, DeleteActivity){
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    Date d(2018, Months::Gennaio, 1);
    ActivityTracker at;
    at.insertActivity(d, a);
    ASSERT_TRUE(at.findActivity(a));
    at.deleteActivity(a);
    ASSERT_FALSE(at.findActivity(a));
}