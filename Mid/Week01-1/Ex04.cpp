//
// Created by mjk on 2024-03-01.
//
#include <iostream>

using namespace std;

/*Main*/
int main() {
    cout << "Enter your name : ";
    string name;
    cin >> name;
    cout << "Enter your height, weight : ";
    int height, weight;
    cin >> height >> weight;
    cout << name << "\'s height is " << height << ", weight is " << weight << '\n';
}