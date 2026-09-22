/*
    Name: m5g3.cpp
    Author: Landon Capistrant
    Date: 9/21/2026
    Purpose: Practice do-while loops and accumulation
*/ 


#include <iostream>

using namespace std;

int main() {
    int choice = 0, sum = 0, repititions = 0;    
    bool doneLooping = false, mainLoop = false, skipNum = false;

    do {
        cout << "Select from the following menu:\n1) Add every other odd number.\n2) Add every other even number.\n3) Quit the program.\nCHOOSE 1-3: ";
        cin >> choice;
        repititions++;

        do {
            doneLooping = false;
            skipNum = false;
            sum = 0;

            switch (choice) {
                case 1: {
                    cout << "\nYou chose to add every other odd number." << endl;
                    doneLooping = true;

                    for (int i = 1; i <= 100; i++) {
                        if (i % 2 != 0) {
                            if (!skipNum){
                                sum += i;
                                skipNum = true;
                            } else {
                                skipNum = false;
                            }
                        }
                    }

                    cout << "The total of adding every-other odd number from 1 to 100 is: " << sum << "\n\n";
                    break;
                }
                case 2: {
                    cout << "\nYou chose to add every other even number." << endl;
                    doneLooping = true;

                    for (int i = 2; i <= 100; i++) {
                        if (i % 2 == 0) {
                            if (!skipNum){
                                sum += i;
                                skipNum = true;
                            } else {
                                skipNum = false;
                            }
                        }
                    }

                    cout << "The total of adding every-other even number from 2 to 100 is: " << sum << "\n\n";
                    break;
                }
                case 3:
                    cout << "\nYou chose to quit." << endl;
                    doneLooping = true;
                    mainLoop = true;
                    break;
                default:
                    cout << "Invalid choice. CHOOSE 1-3: ";
                    cin >> choice;
                    break;
            }
        } while (!doneLooping);
    } while (!mainLoop);

    cout << "***** You ran this program " << repititions << " times *****" << endl;
}
