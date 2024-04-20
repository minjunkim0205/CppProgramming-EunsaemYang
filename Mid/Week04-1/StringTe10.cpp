#include <iostream>

using namespace std;

static string untilFive(const string* str){
    return (*str).substr(0, 5);
}

int main() {
    string str_a, out_str;
    cout << "Enter a string: ";
    getline(cin, str_a);
    out_str = untilFive(&str_a);
    cout << " -> " << out_str;
    char str_b[50];
    cout << "\nEnter a string: ";
    gets(str_b);
    out_str = untilFive(&string(str_b));
    cout << " -> " << out_str;
    return 0;
}