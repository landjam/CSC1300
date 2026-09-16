/*
    mod4a.cpp 
    Landon Capistrant
    September 14, 2026
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int partySize;
    string tableType;

    cout << "How many are in your party? ";
    cin >> partySize;

    if (partySize < 3) {
        tableType = "a small table";
    } else {
        tableType = "a large table";
    }

    cout << "You may be seated at " << tableType << endl;

    return 0;
}
