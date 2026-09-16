#include <iostream>
using namespace std;

int main() {
    double farenheit;
    double celsius;

    cout << "\nWhat is the temperature in Celsius? ";
    cin >> celsius;

    farenheit = celsius * (9.0 / 5.0) + 32;

    cout << endl;
    cout << "RESULT: " << celsius << " degrees Celsius is ";
    cout << farenheit << " degrees Farenheit.\n\n";

    return 0;
}
