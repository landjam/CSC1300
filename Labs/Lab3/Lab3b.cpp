/*
    Title: Lab3b.cpp
    Author: Landon Capistrant
    Date: 9/15/2026
    Purpose: Leap year calculator
*/

#include <iostream>
#include <string>

using namespace std;


int main() {
    int year, remainder, isCentury, centurianLeapYear;
    string extraWord = "", isLeapYear = "False. ";

    cout << "Please enter a year: ";
    cin >> year;

    remainder = year % 4;
    isCentury = year % 100;
    centurianLeapYear = year % 400;

    if (remainder == 0 && (isCentury != 0 || centurianLeapYear == 0)) {
        isLeapYear = "True. ";
    } else {
        extraWord = " not";
    }

    cout << endl << isLeapYear << year << " is" << extraWord << " a leap year." << endl;

    return 0;
}
