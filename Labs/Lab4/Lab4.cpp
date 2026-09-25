/*
    Title: The College Trail
    Author: Landon Capistrant
    Date: 9/22/2026
    Purpose: College simulator
    References: 
        Raw string literals: https://stackoverflow.com/a/5460235
        cin.get():           https://stackoverflow.com/a/21257728
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    bool endGame = false;
    char replayResponse = ' ';
    int day = 1;

    string collegianName;
    int money;
    int food = 100;
    int health = 100;
    int energy = 100;
    int stress = 20; // first day jitters
    int social = 50;
    int attendance = 5;
    int study = 5;
    double gpa = 4.0;

    string const BORDER_BAR = "+====================================================================+";
    string const EMPTY_BAR  = "|                                                                    |";

    srand(time(0));

    // Give random base moneyz
    money = (rand() % 5 + 1) * 100;

    // Main gameplay loop
    while (tolower(replayResponse) != 'n') {
        // boy, sure wish I could use functions
        cout << BORDER_BAR << endl;
        cout << EMPTY_BAR << endl;
        cout << "|                         THE COLLEGE TRAIL                          |" << endl;
        cout << EMPTY_BAR << endl;
        cout << "|             Please resize your console window to fit               |" << endl;
        cout << "|              the game frame and bottom cursor (>).                 |" << endl;
        cout << EMPTY_BAR << endl;
        cout << "|                         Width: 70 characters                       |" << endl;
        cout << "|                         Height: 25 characters                      |" << endl;
        cout << EMPTY_BAR << endl;
        cout << "|                  Press ENTER when you are ready.                   |" << endl;
        
        for (int i = 1; i <= 12; i++) {
            cout << EMPTY_BAR << endl;
        }
        
        cout << BORDER_BAR << endl;
        cout << ">";

        // Pause until input detected
        cin.get();

        cout << BORDER_BAR << endl;
        cout << EMPTY_BAR << endl;
        cout << EMPTY_BAR << endl;
        cout << "|                                ---                                 |" << endl;
        cout << "|                               {^_^}                                |" << endl;
        cout << "|                              --\\/-  O                              |" << endl;
        cout << "|                             //|  |\\\\//                             |" << endl;
        cout << "|                            // |__| --                              |" << endl;
        cout << "|                            O / |  \\                                |" << endl;
        cout << "|                              | /\\ |                                |" << endl;
        cout << "|                              ||  ||                                |" << endl;
        cout << "|                              O    O                                |" << endl;
        cout << EMPTY_BAR << endl;
        cout << EMPTY_BAR << endl;
        cout << "|                    Please name your collegian:                     |" << endl;

        for (int i = 1; i <= 8; i++) {
            cout << EMPTY_BAR << endl;
        }

        cout << BORDER_BAR << endl;
        cout << ">";

        getline(cin, collegianName);

        while (day <= 7) {
            // Day to string (wish it could be a function instead 😢)
            string dayString = "";
            string deathString = "";
            int response = 0;

            if (day == 1) {
                dayString = "Monday";
            } else if (day == 2) {
                dayString = "Tuesday";
            } else if (day == 3) {
                dayString = "Wednesday";
            } else if (day == 4) {
                dayString = "Thursday";
            } else if (day == 5) {
                dayString = "Friday";
            } else if (day == 6) {
                dayString = "Saturday";
            } else if (day == 7) {
                dayString = "Sunday";
            }

            cout << "\n\nIt is " << dayString << "; another great day Of school is just beginning.\n";

            // First random events
            switch (rand() % 5 + 1) {
                case 1:
                    cout << collegianName + R"( wakes up late for school.

1. Get ready normally and accept your tardiness
2. Run straight to class without getting ready
3. Go back to sleep and skip class)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + R"( gets to class and everyone stares at them.

Who shows up 45 minutes late to a 50 minute class?
-gpa +stress -social)";

                            gpa *= 0.85;
                            stress += 10;
                            social -= 5;
                            attendance -= 5;
                            energy += 10;
                            health += 10;

                            break;
                        case 2:
                            cout << endl << collegianName + " gets to class only a few minutes late and doesn't miss anything.\n\n+gpa +attendance +health";

                            gpa *= 1.1;
                            social += 5;
                            attendance += 5;
                            energy -= 5;
                            health += 15; // running is good for the heart

                            break;
                        case 3:
                            cout << endl << collegianName + " misses the entire lecture from the comfort of their bed.\n\n+gpa +stress -attendance";

                            gpa *= 0.75;
                            stress += 5;
                            social -= 10;
                            attendance -= 10;
                            energy += 15;
                            health += 5;

                            break;
                    }

                    break;
                case 2:
                    cout << collegianName + R"( wakes up early before school.

1. Get ready early and study before class starts
2. Go back to sleep until alarm goes off
3. Go to the gym and get breakfast before class)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " studies until it's time for class.\n\n+gpa -stress -energy";

                            gpa *= 1.25;
                            stress -= 5;
                            attendance += 5;
                            energy -= 10;
                            health -= 5;

                            break;
                        case 2:
                            if (rand() % 2 > 0) {
                                cout << collegianName + " sleeps in until class is about to begin.\n\n +attendance +health";

                                gpa *= 1.1;
                                attendance += 5;
                                energy += 5;
                                health += 5;

                                break;
                            } else {
                                cout << collegianName + " sleeps in past the end of class.\n\n -gpa -attendance +energy";

                                gpa *= 0.75;
                                stress += 5;
                                social -= 10;
                                attendance -= 10;
                                energy += 15;
                                health += 10;

                                break;
                            }
                            
                        case 3:
                            cout << collegianName + " pumps some iron and gets daily nutrients prior to class.\n\n+gpa -stress -energy";

                            gpa *= 1.15;
                            social += 5;
                            attendance += 5;
                            energy -= 10;
                            health += 20;
                            food += 10;

                            break;
                    }

                    break;
                case 3:
                    
                    break;
                case 4:
                    
                    break;
                case 5:
                    
                    break;
            }

            // Between classes
            switch (rand() % 3 + 1) {
                case 1:

                    break;
                case 2:
                    
                    break;
                case 3:
                    
                    break;
            }

            // Secondary random events
            switch (rand() % 5 + 1) {
                case 1:

                    break;
                case 2:
                    
                    break;
                case 3:
                    
                    break;
                case 4:
                    
                    break;
                case 5:
                    
                    break;
            }

            // Night choice
            switch (rand() % 3 + 1) {
                case 1:

                    break;
                case 2:
                    
                    break;
                case 3:

                    break;
            }

            // Stat analysis
            if (money <= 0) {
                // Display broke art
                deathString = " went broke. Can't go to college without money.";
            } else if (food <= 0) {
                // Display starvation art
                deathString = " died of starvation. Food is essential to survival.";
            } else if (health <= 0) {
                // Display unhealthy art
                deathString = " succumbed to bad health. Staying healthy is necessary to college.";
            } else if (energy <= 0) {
                // Display lack of energy art
                deathString = " ran out of energy. Energy is needed in order to do anything.";
            } else if (stress >= 0) {
                // Display stressful art
                deathString = " got stressed out. Don't stress it.";
            } else if (social <= 0) {
                // Display lack of social art
                deathString = " became antisocial. Life is survived together, not alone.";
            } else if (attendance <= 0) {
                // Display bad attendance art
                deathString = " stopped attending. Attendance is required to graduate.";
            } else if (study <= 0) {
                // Display lack of studying art
                deathString = " stopped studying. Can't pass without studying.";
            } else if (gpa < 2.0) {
                // Display failed college art
                deathString = " gpa dropped too far. D's do not get degrees.";
            }

            if (deathString != "") {
                cout << collegianName + deathString;
                break;
            }

            day++;
        }

        // algorithm to determine performance score
        cout << endl << endl << "Money: " + to_string(money)
            + " Food: " + to_string(food)
            + " Health: " + to_string(health)
            + " Energy: " + to_string(energy)
            + " Stress: " + to_string(stress)
            + " Social: " + to_string(social)
            + " Attendance: " + to_string(attendance)
            + " Study: " + to_string(study)
            + " GPA: " + to_string(gpa);

        // End game
        cout << "Thanks for playing! Play again? (y/n): ";
        cin >> replayResponse;
    }

    return 0;
}
