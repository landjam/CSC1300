/*
    Name: m5g1.cpp
    Author: Landon Capistrant
    Date: 9/21/2026
    Purpose: Practice while loops and switch cases
*/ 


#include <iostream>

using namespace std;

int main() {
    int choice;
    bool doneLooping = false;


    cout << "Select from the following menu:\n1) Add every other odd number.\n2) Add every other even number.\n3) Quit the program.\nCHOOSE 1-3: ";
    cin >> choice;


    while (!doneLooping) {
        switch (choice) {
            case 1: {
                cout << "\nYou chose to add every other odd number." << endl;
                doneLooping = true;
                break;
            }
            case 2: {
                cout << "\nYou chose to add every other even number." << endl;
                doneLooping = true;
                break;
            }
            case 3:
                cout << "\nYou chose to quit." << endl;
                doneLooping = true;
                break;
            default:
                cout << "Invalid choice. CHOOSE 1-3: ";
                cin >> choice;
                break;
        }
    }
}
