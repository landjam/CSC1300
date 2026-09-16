/*
    Title: lab3a.cpp
    Author: Landon Capistrant
    Date: 9/4/2026
    Purpose: Practice data type casting
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int result, randomNum;
    double moreMoney = 0.75;

    srand(time(0));

    result = 6 - 3 * 2 + 7 - 1 + 17 % 2;
    cout << result << endl;

    result *= moreMoney;
    cout << result << endl;

    result = (6 - 3) * 2 + (7 - 1) + 17 % 2;
    cout << result << endl;

    moreMoney *= result;
    cout << fixed << setprecision(4) << moreMoney << endl;

    randomNum = rand() % 21 + 5;
    cout << randomNum << endl;

    return 0;
}
