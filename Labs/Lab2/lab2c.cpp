/*
    Title: lab_2c.cpp
    Author: Landon Capistrant & Jaxon Broyles
    Date: 9/3/2026
    Purpose: calculate grade average
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string firstName;
    double grade1, grade2, grade3, average;

    cout << setprecision(4) << fixed << showpoint;
    cin.ignore();
    cout << "Enter the student's name: ";
    getline(cin, firstName);
    cout << "Enter " << firstName << "'s first test grade: ";
    cin >> grade1;
    cout << "Enter " << firstName << "'s second test grade: ";
    cin >> grade2;
    cout << "Enter " << firstName << "'s third test grade: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;

    cout << endl << firstName << " has a test average of " << average << endl;

    return 0;
}
