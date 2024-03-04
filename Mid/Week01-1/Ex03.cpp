//
// Created by mjk on 2024-03-01.
//
#include <iostream>

/*Function*/
double areaOfCircle(int radius);

double areaOfCircle(int radius) {
    return (3.14 * radius * radius);
}

/*Main*/
int main() {
    int n = 3;
    char c = '#';
    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';
    std::cout << "Area is : " << areaOfCircle(n);
    return 0;
}