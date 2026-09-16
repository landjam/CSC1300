/*
    Title: lab_2a.cpp
    Author: Landon Capistrant & Jaxon Broyles
    Date: 9/1/2026
    Purpose: This program is written for waiters & waitresses at
    TGI Fridays so that they can calculate total cost
    of hot wings for their customers.
    Note: This assignment was inspired by the movie
    Zookeeper. I love this movie.
    https://www.imdb.com/title/tt1222817/
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int wings;
    const double tax = 1.085;
    const double price = 0.99;
    double totalCost;

    cout << setprecision(2) << fixed << showpoint;
    cout << "\n\nPlease input the number of hot wings purchased: ";
    cin >> wings;

    totalCost = wings * price * tax;
    
    cout << "Your total bill is: $" << totalCost;
    
    return 0;
}
