#include <iostream>

using namespace std;

string untilFive(const string str){
    return str.substr(0, 5);
}
string untilFive(const char* str){
    char temp_str[5];
    for(int i = 0; i < 5; i++){
        temp_str[i] = str[i];
    }
    //temp_str[5] = '\n';
    return temp_str;
}

int main() {
    string str_a, out_str;
    cout << "Enter a string: ";
    getline(cin, str_a);
    out_str = untilFive(str_a);
    cout << " -> " << out_str;
    char str_b[50];
    cout << "\nEnter a string: ";
    gets(str_b);
    out_str = untilFive(str_b);
    cout << " -> " << out_str;
    return 0;
}