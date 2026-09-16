/*
    Title: Lab3d.cpp
    Author: Landon Capistrant
    Date: 9/15/2026
    Purpose: Determine login name from credentials
*/

#include <iostream>
#include <string>

using namespace std;


int main() {
    string firstName, lastName;
    int number;

    cout << "Please enter your login information: ";
    cin >> firstName >> lastName >> number;

    if (lastName.length() > 5) {
        lastName = lastName.substr(0, 5);
    }

    cout << "Your login name is: " << lastName << firstName.substr(0, 1) << number % 100 << endl;

    return 0;
}
