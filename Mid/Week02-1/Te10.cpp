//
// Created by mjk on 2024-03-11.
//
#include <iostream>
#include <iomanip>

int main(){
    std::cout << "Enter your score {q, mid, final} >> " << "\n";
    float q, m, f; std::cin >> q >> m >> f;
    std::cout << "total : " << (q+m+f) << "\n";
    std::cout << std::setprecision(2);
    std::cout << "avg : " << ((q+m+f)/3) << "\n";
    
    return 0;
}