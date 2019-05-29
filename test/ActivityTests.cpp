//
// Created by alessio on 29/05/19.
//

#include "gtest/gtest.h"

#include "../Activity.h"

TEST(Activity, CreateActivity) {
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    ASSERT_EQ(0,a.getDescription().compare("Doing something"));
    ASSERT_EQ(8, a.getStartHours());
    ASSERT_EQ(15, a.getStartMinutes());
    ASSERT_EQ(9, a.getEndHours());
    ASSERT_EQ(30, a.getEndMinutes());
}