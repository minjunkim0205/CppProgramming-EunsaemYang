#include <iostream>

using namespace std;

int main() {
    string str_1 = "The time has come.";
    const string str_2 = "Are you ready?";
    str_1.append(str_2);
    cout << str_1 << '\n';
    return 0;
}