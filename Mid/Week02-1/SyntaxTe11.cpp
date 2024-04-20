//
// Created by mjk on 2024-03-11.
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    cout << "Enter number >> ";
    int n; cin >> n;
    while(true){
        cout << "Enter type {oct(8), hex(16), digit(10)} >> ";
        string s; cin >> s;
        if (s == "oct" || s == "8"){
            cout << "0" << oct;
        } else if (s == "hex" || s == "16"){
            cout << "0x" << hex;
        } else if (s == "digit" || s == "10"){
            continue;
            //cout << fixed;
        } else {
            cout << "Error" << "\n";
            break;
        }
        cout << n << "\n";
        cout << fixed;
    }
    
    return 0;
}