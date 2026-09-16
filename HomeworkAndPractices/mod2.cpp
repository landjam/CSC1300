#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string favoriteColor;
    int favoriteNumber;

    cout << "What is your favorite color? ";
    cin >> favoriteColor;

    cout << "What is your favorite number? ";
    cin >> favoriteNumber;

    cout << "\nYour favorite color is " << favoriteColor << ", and your favorite number is " << favoriteNumber << "." << endl;

    return 0;
}
