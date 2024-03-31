#include <iostream>

using namespace std;

static string untilFive(const string &str){
    return str.substr(0, 5);
}

int main() {
    string stra, outstr;
    cout << "Enter a string: ";
    getline(cin, stra);
    outstr = untilFive(stra);
    cout << " -> " << outstr;
    char strb[50];
    cout << "\nEnter a string: ";
    gets(strb);
    outstr = untilFive(strb);
    cout << " -> " << outstr;
    return 0;
}