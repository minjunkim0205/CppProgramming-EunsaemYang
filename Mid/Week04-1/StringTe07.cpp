#include <iostream>

using namespace std;

int main() {
    const string str = "This is a long string.";
    int p = str.find("is");
    cout << str[p] << '\n';
    cout << str.substr(p) << '\n';
    return 0;
}