#include <iostream>
#include <string>

using namespace std;

static void find2replace(string &str, const string &has, const string &replace, bool &result){
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == has[0]){
            str[i] = replace[0];
            result = true;
        }
    }
}

int main() {
    string str = "C++ programming";
    string has = "+";
    string replace = "p";
    bool result = false;
    cout << "Before = " << str << endl;
    find2replace(str, has, replace, result);
    if (result == true)
        cout << "After = " << str << endl;
    else
        cout << str << " : " << has << " not found.." << endl;
    return 0;
}