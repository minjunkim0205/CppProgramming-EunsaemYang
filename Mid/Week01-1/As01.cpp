//
// Created by mjk on 2024-03-01.
//
#include <iostream>

using namespace std;

/*Struct*/
struct Student {
    string name;
    int id;
};

/*Main*/
int main() {
    Student student = {"MinjunKim", 20235128};
    cout << student.name << '\n' << student.id << '\n';

    return 0;
}