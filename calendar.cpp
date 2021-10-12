/** Implementation for calendar related functions.
@file calendar.cpp
@author YOUR NAME HERE
*/
// TODO: Fill in your name above.

#include "calendar.h"
#include <iostream>
using namespace std;

bool is_leap_year(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int num_days(int year) {
  // TODO: Implement this function.
  return -1;
}

int num_days(int year, int month) {
  // TODO: Implement this function.
  return -1;
}

bool is_valid_date(int year, int month, int day) {
  // TODO: Implement this function.
  return false;
}

int day_of_year(int year, int month, int day) {
  // TODO: Implement this function.
  return -1;
}

int days_since_beginning(int year, int month, int day) {
  // TODO: Implement this function.
  return -1;
}

int days_until(int y1, int m1, int d1, int y2, int m2, int d2) {
  // TODO: Implement this function.
  return -1;
}