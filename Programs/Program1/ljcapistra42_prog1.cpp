/*
    Title: ljcapistra42_prog1.cpp
    Author: Landon Capistrant
    Date: September 14, 2026
    Purpose: calculate grade average
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    char replayResponse, answer;
    int score;
    string const bar = "--------------------------------------------------";

    while (tolower(replayResponse) != 'n') {
        // Program init
        score = 0;
        cout << endl << bar << endl;
        cout << "Welcome to Landon's Geography Trivia Game" << endl;
        cout << bar << endl << endl;
        cout << "Match the following landmarks to their location in the world to get a point." << endl << endl << endl;


        // Question 1
        cout << "**1**" << endl;
        cout << "What country is Christ the Redeemer located in?" << endl;
        cout << "\ta. Brazil" << endl <<
            "\tb. Peru" << endl <<
            "\tc. Argentina" << endl <<
            "\td. Uruguay" << endl << 
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'a') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 2
        cout << endl << "**2**" << endl;
        cout << "What is the capital of Canada?" << endl;
        cout << "\ta. Toronto" << endl <<
            "\tb. Vancouver" << endl <<
            "\tc. Ottawa" << endl <<
            "\td. Montreal" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'c') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 3
        cout << endl << "**3**" << endl;
        cout << "Which country has the largest population in the world?" << endl;
        cout << "\ta. India" << endl <<
            "\tb. China" << endl <<
            "\tc. United States" << endl <<
            "\td. Indonesia" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'a') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 4
        cout << endl << "**4**" << endl;
        cout << "Which is the largest continent by area?" << endl;
        cout << "\ta. Africa" << endl <<
            "\tb. Europe" << endl <<
            "\tc. Asia" << endl <<
            "\td. North America" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'c') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 5
        cout << endl << "**5**" << endl;
        cout << "Which country is home to the Great Barrier Reef?" << endl;
        cout << "\ta. Australia" << endl <<
            "\tb. South Africa" << endl <<
            "\tc. New Zealand" << endl <<
            "\td. Indonesia" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'a') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 6
        cout << endl << "**6**" << endl;
        cout << "Which river is the longest river in South America?" << endl;
        cout << "\ta. Amazon River" << endl <<
            "\tb. Mississippi River" << endl <<
            "\tc. Nile River" << endl <<
            "\td. Parana River" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'a') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 7
        cout << endl << "**7**" << endl;
        cout << "Which country is shaped like a boot?" << endl;
        cout << "\ta. Spain" << endl <<
            "\tb. Italy" << endl <<
            "\tc. Greece" << endl <<
            "\td. Portugal" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'b') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 8
        cout << endl << "**8**" << endl;
        cout << "Which desert is the largest hot desert in the world?" << endl;
        cout << "\ta. Gobi Desert" << endl <<
            "\tb. Arabian Desert" << endl <<
            "\tc. Sahara Desert" << endl <<
            "\td. Kalahari Desert" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'c') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 9
        cout << endl << "**9**" << endl;
        cout << "Which country has the city of Cairo as its capital?" << endl;
        cout << "\ta. Egypt" << endl <<
            "\tb. Jordan" << endl <<
            "\tc. Morocco" << endl <<
            "\td. Turkey" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'a') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Question 10
        cout << endl << "**10**" << endl;
        cout << "Which ocean is located between Africa and Australia?" << endl;
        cout << "\ta. Atlantic Ocean" << endl <<
            "\tb. Pacific Ocean" << endl <<
            "\tc. Arctic Ocean" << endl <<
            "\td. Indian Ocean" << endl <<
            endl;
        cout << "ANSWER a, b, c, or d: ";
        cin >> answer;

        if (answer == 'd') {
            score += 1;
            cout << "Correct! one point!" << endl;
        } else {
            cout << "Incorrect. better luck next time." << endl;
        }

        // Program final
        // Centering string reference: https://stackoverflow.com/a/17513466
        cout << endl << endl << string((bar.length() - 7) / 2, ' ') + "RESULTS" << endl;
        cout << bar << endl;
        cout << "You scored " << score << " points. ";

        if (score == 10) {
            cout << "You got all of them right! Incredible job!" << endl;
        } else if (score > 4) {
            // no need to check if it's less than 10 since it would've went with the first if
            cout << "Great Job!" << endl;
        } else {
            cout << "You can do better..." << endl;
        }

        cout << bar << endl << endl;

        cout << "Do you want to play again? (y/n)  ";
        cin >> replayResponse;
    }

    return 0;
}
