/** Tests for calendar related functions.
@file calendar_test.cpp
@author YOUR NAME HERE
*/
// TODO: Fill in your name above.

#include "calendar.h"
#include <gtest/gtest.h>
using namespace std;

TEST(CalendarTest, IsLeapYear) {
  EXPECT_FALSE(is_leap_year(2021));
  EXPECT_TRUE(is_leap_year(2020));
  EXPECT_FALSE(is_leap_year(2100));
  EXPECT_TRUE(is_leap_year(2000));
}

TEST(CalendarTest, NumDaysYear) {
  EXPECT_EQ(num_days(2021), 365);
  // TODO: Add at least another good test case here.
}

TEST(CalendarTest, NumDaysMonth) {
  EXPECT_EQ(num_days(2021, 1), 31);
  // TODO: Add at least 12 more good test cases here.
}

TEST(CalendarTest, IsValidDate) {
  EXPECT_TRUE(is_valid_date(2021, 10, 11));
  // TODO: Add at least 6 more good test cases here.
}

TEST(CalendarTest, DayOfYear) {
  EXPECT_EQ(day_of_year(2021, 10, 11), 284);
  EXPECT_EQ(day_of_year(2021, 1, 1), 1);
  // TODO: Add at least another good test case here.
}

TEST(CalendarTest, DaysSinceBeginning) {
  EXPECT_EQ(days_since_beginning(2021, 10, 11), 738073);
  EXPECT_EQ(days_since_beginning(1, 1, 1), 0);
  // TODO: Add at least another good test case here.
}

TEST(CalendarTest, DaysUntil) {
  EXPECT_EQ(days_until(2021, 10, 11, 2021, 10, 18), 7);
  EXPECT_EQ(days_until(2021, 10, 11, 2021, 10, 11), 0);
  // TODO: Add at least 3 more good test cases here.
}