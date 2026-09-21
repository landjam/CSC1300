/*
    Name: mod4b.cpp
    Author: Landon Capistrant
    Date: 9/16/2026
    Purpose: determine even, odd, and ranges within numbers
*/

#include <iostream>

using namespace std;

int main() {
    int inputNum;
    string evenOdd = "odd";

    cout << "Enter a number: ";
    cin >> inputNum;

    if (inputNum % 2 == 0) {
        evenOdd = "even";
    }

    if (inputNum >= 20 && inputNum <= 100) {
        cout << "This is an " << evenOdd << " number between 20 and 100." << endl;
    } else {
        cout << "This is an " << evenOdd << " number under 20 or over 100." << endl;
    }

    return 0;
}
