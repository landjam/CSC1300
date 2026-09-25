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
    string centeredWords;
    string padding;

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
    int const GAME_WIDTH = 70;
    int const GAME_HEIGHT = 25;

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
        cout << "|                         Width: " << GAME_WIDTH << " characters                       |" << endl;
        cout << "|                         Height: " << GAME_HEIGHT << " characters                      |" << endl;
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

        while (day <= 5) {
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
            }

            cout << BORDER_BAR << endl;

            // could do a sun rising art 
            for (int i = 1; i <= (GAME_HEIGHT - 6); i++) {
                cout << EMPTY_BAR << endl;
            }

            cout << BORDER_BAR << endl;

            centeredWords = "It is " + dayString + ";";
            padding = string((GAME_WIDTH - centeredWords.length()) / 2, ' ');
            cout << '|' << padding << centeredWords << padding << '|' << endl;
            // this sort of programmatic centering works better with a function, as to allow for checks. without, the code would look very messy, so I choose not to check.
            centeredWords = " another great day Of school is just beginning.";
            padding = string((GAME_WIDTH - centeredWords.length()) / 2, ' ');
            cout << '|' << padding << centeredWords << padding << '|' << endl;

            cout << BORDER_BAR << endl;
            cout << ">";

            cin.get();
            

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
                    cout << collegianName + R"( wakes up feeling unusually hungry.

1. Make a quick breakfast
2. Buy breakfast on campus
3. Skip breakfast and get to class)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " makes breakfast before leaving for class.\n\n+food +health -energy";
                            food += 15;
                            health += 5;
                            energy -= 5;
                            break;
                        case 2:
                            cout << collegianName + " grabs breakfast from the campus cafe.\n\n-food +food +health";
                            money -= 25;
                            food += 20;
                            health += 10;
                            break;
                        case 3:
                            cout << collegianName + " ignores their hunger and heads straight to class.\n\n-food -health +energy";
                            food -= 15;
                            health -= 5;
                            energy += 5;
                            break;
                    }

                    break;
                case 4:
                    cout << collegianName + R"( gets a message from a friend asking to hang out before class.

1. Hang out with your friend
2. Tell them you need to study
3. Study together)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " hangs out with their friend before class.\n\n+social -energy +stress";
                            social += 10;
                            energy -= 10;
                            stress += 5;
                            break;
                        case 2:
                            cout << collegianName + " politely declines and spends the time studying.\n\n+study +gpa -social";
                            study += 10;
                            gpa *= 1.05;
                            social -= 5;
                            break;
                        case 3:
                            cout << collegianName + " convinces their friend to study together.\n\n+study +social -energy";
                            study += 8;
                            social += 5;
                            energy -= 5;
                            break;
                    }

                    break;
                case 5:
                    cout << collegianName + R"( remembers that an assignment is due today.

1. Finish the assignment before class
2. Turn in what you have
3. Forget about it)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " finishes the assignment just in time.\n\n+gpa +study -energy";
                            gpa *= 1.15;
                            study += 10;
                            energy -= 10;
                            stress -= 5;
                            break;
                        case 2:
                            cout << collegianName + " turns in an incomplete assignment and hopes for partial credit.\n\n+gpa +stress";
                            gpa *= 1.03;
                            stress += 5;
                            break;
                        case 3:
                            cout << collegianName + " completely forgets about the assignment.\n\n-gpa +stress -study";
                            gpa *= 0.85;
                            stress += 10;
                            study -= 5;
                            break;
                    }

                    break;
            }

            // Between classes
            switch (rand() % 3 + 1) {
                case 1:
                    cout << collegianName + R"( has some free time between classes.

1. Go to the library
2. Get something to eat
3. Take a quick nap)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " spends the free time studying in the library.\n\n+study +gpa -energy";
                            study += 10;
                            gpa *= 1.05;
                            energy -= 5;
                            break;
                        case 2:
                            cout << collegianName + " grabs a meal before heading to the next class.\n\n+food +health -money";
                            food += 15;
                            health += 5;
                            money -= 20;
                            break;
                        case 3:
                            cout << collegianName + " finds a quiet place and takes a quick nap.\n\n+energy -stress";
                            energy += 15;
                            stress -= 5;
                            break;
                    }

                    break;
                case 2:
                    cout << collegianName + R"( runs into an old friend on campus.

1. Stop and talk
2. Say hello and keep walking
3. Invite them to lunch)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " catches up with their friend for a few minutes.\n\n+social -stress -energy";
                            social += 10;
                            stress -= 5;
                            energy -= 5;
                            break;
                        case 2:
                            cout << collegianName + " waves hello and continues to their next class.\n\n+attendance";
                            attendance += 5;
                            break;
                        case 3:
                            cout << collegianName + " invites their friend to grab lunch together.\n\n+social -money +food";
                            social += 15;
                            money -= 25;
                            food += 15;
                            break;
                    }

                    break;
                case 3:
                    cout << collegianName + R"( discovers that their professor is offering extra credit.

1. Complete the extra credit
2. Ask a friend for help
3. Ignore the opportunity)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " completes the extra credit assignment.\n\n+gpa +study -energy";
                            gpa *= 1.1;
                            study += 8;
                            energy -= 10;
                            break;
                        case 2:
                            cout << collegianName + " works on the extra credit with a friend.\n\n+gpa +social -energy";
                            gpa *= 1.07;
                            social += 5;
                            energy -= 5;
                            break;
                        case 3:
                            cout << collegianName + " decides they have enough work already.\n\n+energy -gpa";
                            energy += 5;
                            gpa *= 0.98;
                            break;
                    }

                    break;
            }

            // Secondary random events
            switch (rand() % 5 + 1) {
                case 1:
                    cout << collegianName + R"( gets an unexpected pop quiz.

1. Take the quiz honestly
2. Quickly review notes before the quiz
3. Guess your way through it)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " takes the quiz and does their best.\n\n+gpa +study -energy";
                            gpa *= 1.05;
                            study += 5;
                            energy -= 5;
                            break;
                        case 2:
                            cout << collegianName + " reviews their notes and feels more prepared.\n\n+gpa +study -stress";
                            gpa *= 1.1;
                            study += 8;
                            stress -= 5;
                            break;
                        case 3:
                            cout << collegianName + " guesses on almost every question.\n\n-gpa +energy +stress";
                            gpa *= 0.9;
                            energy += 5;
                            stress += 10;
                            break;
                    }

                    break;
                case 2:
                    cout << collegianName + R"( sees a campus club advertising outside the student center.

1. Join the club
2. Talk to the members but don't join
3. Walk past them)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " joins the club and meets several new people.\n\n+social -energy -gpa";
                            social += 15;
                            energy -= 10;
                            gpa *= 0.95;
                            break;
                        case 2:
                            cout << collegianName + " talks to the club members for a while.\n\n+social -stress";
                            social += 8;
                            stress -= 5;
                            break;
                        case 3:
                            cout << collegianName + " decides that joining another club would be too much work.\n\n-social +energy";
                            social -= 5;
                            energy += 5;
                            break;
                    }

                    break;
                case 3:
                    cout << collegianName + R"( notices a table giving away free food on campus.

1. Get a meal
2. Grab a small snack
3. Leave the food for someone else)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " gets a free meal and saves some money.\n\n+food +health +money";
                            food += 20;
                            health += 10;
                            money += 15;
                            break;
                        case 2:
                            cout << collegianName + " grabs a small snack before heading out.\n\n+food +energy";
                            food += 10;
                            energy += 5;
                            break;
                        case 3:
                            cout << collegianName + " decides they aren't hungry enough to take anything.\n\n-food +social";
                            food -= 5;
                            social += 5;
                            break;
                    }

                    break;
                case 4:
                    cout << collegianName + R"( receives an unexpected bill.

1. Pay it immediately
2. Put it off until later
3. Ask a friend for help)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " pays the bill and gets it out of the way.\n\n-money -stress";
                            money -= 50;
                            stress -= 5;
                            break;
                        case 2:
                            cout << collegianName + " puts the bill off and tries not to think about it.\n\n+stress +money";
                            stress += 10;
                            money += 10;
                            break;
                        case 3:
                            cout << collegianName + " asks a friend for some help paying the bill.\n\n+money -social +stress";
                            money += 25;
                            social -= 5;
                            stress += 5;
                            break;
                    }

                    break;
                case 5:
                    cout << collegianName + R"( gets invited to a party tonight.

1. Go to the party
2. Study instead
3. Stop by for a little while)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " goes to the party and has a great time.\n\n+social -energy -money +stress";
                            social += 20;
                            energy -= 15;
                            money -= 30;
                            stress += 5;
                            break;
                        case 2:
                            cout << collegianName + " stays home and gets some studying done.\n\n+study +gpa -social";
                            study += 10;
                            gpa *= 1.08;
                            social -= 5;
                            break;
                        case 3:
                            cout << collegianName + " stops by the party before heading home.\n\n+social -energy -money";
                            social += 10;
                            energy -= 5;
                            money -= 15;
                            break;
                    }

                    break;
            }

            // Night choice
            switch (rand() % 3 + 1) {
                case 1:
                    cout << collegianName + R"( gets back to their room after a long day.

1. Study for tomorrow
2. Go straight to sleep
3. Watch something to relax)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " studies late into the night.\n\n+study +gpa -energy +stress";
                            study += 10;
                            gpa *= 1.1;
                            energy -= 15;
                            stress += 5;
                            break;
                        case 2:
                            cout << collegianName + " gets into bed and falls asleep almost immediately.\n\n+energy +health -stress";
                            energy += 20;
                            health += 10;
                            stress -= 10;
                            break;
                        case 3:
                            cout << collegianName + " watches a show and forgets about school for a while.\n\n+energy -stress -study";
                            energy += 10;
                            stress -= 10;
                            study -= 5;
                            break;
                    }

                    break;
                case 2:
                    cout << collegianName + R"( gets a text from some friends asking to go out for the night.

1. Go out with them
2. Stay home and relax
3. Invite them over)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " spends the evening with friends.\n\n+social -money -energy";
                            social += 15;
                            money -= 25;
                            energy -= 10;
                            break;
                        case 2:
                            cout << collegianName + " stays in and enjoys a quiet evening.\n\n+energy -stress";
                            energy += 15;
                            stress -= 10;
                            break;
                        case 3:
                            cout << collegianName + " invites their friends over for a cheaper night together.\n\n+social -food -energy";
                            social += 10;
                            food -= 10;
                            energy -= 5;
                            break;
                    }

                    break;
                case 3:
                    cout << collegianName + R"( realizes they haven't prepared for tomorrow.

1. Prepare everything tonight
2. Set an early alarm and prepare tomorrow
3. Just wing it)" << endl;
                    cin >> response;

                    switch (response) {
                        case 1:
                            cout << collegianName + " prepares their backpack, clothes, and assignments for tomorrow.\n\n+study -stress -energy";
                            study += 5;
                            stress -= 5;
                            energy -= 5;
                            break;
                        case 2:
                            cout << collegianName + " sets an alarm and decides to deal with everything in the morning.\n\n+energy -stress";
                            energy += 5;
                            stress -= 5;
                            break;
                        case 3:
                            cout << collegianName + " decides tomorrow's problems can wait until tomorrow.\n\n+energy +stress -study";
                            energy += 10;
                            stress += 5;
                            study -= 5;
                            break;
                    }

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
            } else if (stress >= 50) {
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

            // hunger
            food -= 30;
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
