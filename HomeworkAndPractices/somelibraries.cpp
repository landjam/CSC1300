/*
    Title: somelibraries
    Author: Landon Capistrant
    Date: 9/2/2026
    Purpose: calculate cost for items
*/

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <numbers>
#include <limits>
#include <cstdlib>

using namespace std;

int main() {
    int x, y, z;

    double pi = std::numbers::pi;
    int maxInt = std::numeric_limits<int>::max();
    int minInt = std::numeric_limits<int>::min(); // minimum value for int on this system
    int lowestInt = std::numeric_limits<int>::lowest();
    bool unsignedSigned = std::numeric_limits<unsigned int>::is_signed;

    time_t currentTime = std::time(0);
    char* dateTime;
    dateTime = ctime(&currentTime); // human readable time

    srand(std::time(0)); // seed the random number generator
    // without seeding, you will get the same seed every time you run the program

    int randomNum = rand() % 100 + 1; // generates a random number between 1 (starting number) and 100 (full range)

    sqrt(x); // square root
    pow(x, y); // x raised to the power of y
    fabs(x); // absolute value

    ceil(x); // rounds up to nearest integer
    floor(x); // rounds down to nearest integer
    fmax(x, y); // returns maximum value
    fmin(x, y); // returns minimum value
    fma(x, y, z); // computes (x * y) + z
}
