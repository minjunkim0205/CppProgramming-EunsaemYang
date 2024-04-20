#include <iostream>

using namespace std;

int main() {
    string str = "ABCDEFGH";
    str = str.substr(str.length()-1);
    cout << str << '\n';
    cout << *(str.end()-1) << '\n';
    return 0;
}