// Types Example
// Landon Capistrant
// 8/31/2026
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 5;
    int length(20);
    int width, height, depth = 2;

    width = 12;
    height = 63;

    auto x = 7; // compiler chooses best type for you
    float y = 2.123456;
    double z = 3.123456789012345;

    const float SALES_TAX = 9.75f;  // throws error if later changed
                                    // should use SCREAMING_SNAKE_CASE for all consts
                                    // We put "f" to force the compiler to use a float
                                    // when it defaults to double usually.
    bool joe = true;
    char a = 65;
    string mama = "joe";

    double volume = x * y * z;

    short int s = 10;
    long int l = 100000L; // we put L for the value type
    long long int ll = 10000000000LL; // LL for value type as well

    //unsigned has no negatives
    unsigned int u = 5;
    unsigned short us = 5;
    unsigned long ul = 5;
    unsigned long long ull = 5;

    wchar_t wc = L'A'; // used for windows apis
    char16_t c16 = u'A'; // UTF-16
    char32_t c32 = U'A'; // UTF-32

    // "void" is used for functions that return nothing

    return 0;
}
