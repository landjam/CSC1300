/*
    Title: Lab3c.cpp
    Author: Landon Capistrant
    Date: 9/15/2026
    Purpose: To calculate exact change
*/

#include <iostream>

using namespace std;


int main() {
    int amount, dollars, quarters, dimes, nickels, pennies;

    cout << "Please enter the amount: ";
    cin >> amount;

    dollars = amount / 100;
    amount = amount % 100;

    quarters = amount / 25;
    amount = amount % 25;

    dimes = amount / 10;
    amount = amount % 10;

    nickels = amount / 5;
    amount = amount % 5;

    pennies = amount;

    cout << "Your change is: " << endl;

    if (dollars > 0) {
        string plural = "";

        if (dollars > 1) {
            plural = "s";
        }

        cout << dollars << " Dollar" << plural << endl;
    }
    if (quarters > 0) {
        string plural = "";

        if (quarters > 1) {
            plural = "s";
        }

        cout << quarters << " Quarter" << plural << endl;
    }
    if (dimes > 0) {
        string plural = "";

        if (dimes > 1) {
            plural = "s";
        }

        cout << dimes << " Dime" << plural << endl;
    }
    if (nickels > 0) {
        string plural = "";

        if (nickels > 1) {
            plural = "s";
        }

        cout << nickels << " Nickel" << plural << endl;
    }
    if (pennies > 0) {
        string plural = "y";

        if (pennies > 1) {
            plural = "ies";
        }

        cout << pennies << " Penn" << plural << endl;
    }
    if (amount == 0) {
        cout << "No change." << endl;
    }

    return 0;
}
