/*
    Title: lab_2d.cpp
    Author: Landon Capistrant & Jaxon Broyles
    Date: 9/3/2026
    Purpose: calculate grade average
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int bonesStolen;
    const int daysInAYear = 365;
    double prisonYears, prisonDays;

    cout << "How many bones have you stolen? ";
    cin >> bonesStolen;

    prisonDays = bonesStolen * 83;
    prisonYears = prisonDays / daysInAYear;

    cout << "\nYou must go to prison for " << prisonDays << " days, which is " << prisonYears << " years. ";
}
