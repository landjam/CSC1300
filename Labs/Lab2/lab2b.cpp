/*
    Title: lab_2b.cpp
    Author: Landon Capistrant & Jaxon Broyles
    Date: 9/1/2026
    Purpose: calculate cost for items
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double tax = 1.0975;
    double totalCost;

    string itemName, item2Name;
    double itemPrice, item2Price;
    int itemQuantity, item2Quantity;


    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the name of the first item: ";
    getline(cin, itemName);

    cout << "Please input the number of " << itemName << " bought: ";
    cin >> itemQuantity;

    cout << "Please input the price of " << itemName << ": $";
    cin >> itemPrice;
    cin.ignore();

    cout << "\nPlease input the name of the second item: ";
    getline(cin, item2Name);

    cout << "Please input the number of " << item2Name << " bought: ";
    cin >> item2Quantity;

    cout << "Please input the price of " << item2Name << ": $";
    cin >> item2Price;

    totalCost = (itemQuantity * itemPrice + item2Quantity * item2Price) * tax;
    
    cout << endl << "Your total bill is: $" << totalCost;

    return 0;
}
