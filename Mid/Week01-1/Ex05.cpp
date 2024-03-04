//
// Created by mjk on 2024-03-01.
//
#include <iostream>
#include <iomanip>

using namespace std;

/*Main*/
int main() {
    cout << "[ iomanip ]" << '\n';
    int decimal, octal, hexadecimal; // 10진, 8진, 16진
    bool boolean; // 불리언
    cout << "Decimal >> "; cin >> decimal;
    cout << "Octal >> "; cin >> oct >> octal;
    cout << "Hexadecimal >> "; cin >> hex >> hexadecimal;
    cout << "Boolean >> "; cin >> boolalpha >> boolean;
    cout << decimal << '\n';
    cout << oct << octal << '\n';
    cout << hex << hexadecimal << '\n';
    cout << boolalpha << boolean << '\n';

    cout << "[ fixed point ]" << '\n';
    double n = 2345.12432;
    cout << "Print fixed point : " << fixed << setprecision(2) << n << '\n';

    return 0;
}