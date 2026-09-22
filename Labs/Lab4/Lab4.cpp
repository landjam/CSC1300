/*
    Title: Lab4.cpp
    Author: Landon Capistrant
    Date: 9/22/2026
    Purpose: College simulator
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool endGame = false;
    char replayResponse;
    int day = 1;
    string name;

    // Main gameplay loop
    while (!endGame) {
        cout << "Please enter your collegian's name: ";
        cin.ignore();
        getline(cin, name);

        while (day <= 7) {
            cout << "Your " << day << " Of school is just beginning.";
        }

        // End game
        cout << "Thanks for playing! Play again? (y/n): ";
        cin >> replayResponse;

        // Just in case they have caps lock on
        if (tolower(replayResponse) != 'y') {
            return 0;
        }
    }
}
