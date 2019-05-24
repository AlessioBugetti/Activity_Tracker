//
// Created by alessio on 24/05/19.
//

#include "gtest/gtest.h"

#include "../Time.h"

TEST(Time, TimeConstructor) {
    Time t(10, 15);
    ASSERT_EQ(10, t.getHours());
    ASSERT_EQ(15, t.getMinutes());
}