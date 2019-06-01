//
// Created by alessio on 29/05/19.
//

#include "gtest/gtest.h"

#include "../Activity.h"

TEST(Activity, CreateActivity) {
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    ASSERT_EQ("Doing something", a.getDescription());
    ASSERT_EQ(8, a.getStartHours());
    ASSERT_EQ(15, a.getStartMinutes());
    ASSERT_EQ(9, a.getEndHours());
    ASSERT_EQ(30, a.getEndMinutes());
}

TEST(Activity, ModifyStartTimeActivity){
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    a.setStartHours(12);
    a.setStartMinutes(45);
    ASSERT_EQ("Doing something", a.getDescription());
    ASSERT_EQ(12, a.getStartHours());
    ASSERT_EQ(45, a.getStartMinutes());
    ASSERT_EQ(9, a.getEndHours());
    ASSERT_EQ(30, a.getEndMinutes());
}

TEST(Activity, ModifyEndTimeActivity){
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    a.setEndHours(23);
    a.setEndMinutes(13);
    ASSERT_EQ("Doing something", a.getDescription());
    ASSERT_EQ(8, a.getStartHours());
    ASSERT_EQ(15, a.getStartMinutes());
    ASSERT_EQ(23, a.getEndHours());
    ASSERT_EQ(13, a.getEndMinutes());
}

TEST(Activity, ModifyDescriptionActivity) {
    Time t1(8, 15);
    Time t2(9, 30);
    Activity a("Doing something", t1, t2);
    a.setDescription("Doing something else");
    ASSERT_EQ("Doing something else", a.getDescription());
    ASSERT_EQ(8, a.getStartHours());
    ASSERT_EQ(15, a.getStartMinutes());
    ASSERT_EQ(9, a.getEndHours());
    ASSERT_EQ(30, a.getEndMinutes());
}