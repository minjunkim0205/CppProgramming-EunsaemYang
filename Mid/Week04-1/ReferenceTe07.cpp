#include <iostream>

using namespace std;

struct Circle{
    int r;
    float pi;
};

int main(){
    Circle a{};
    Circle& ref = a;
    
    return 0;
}