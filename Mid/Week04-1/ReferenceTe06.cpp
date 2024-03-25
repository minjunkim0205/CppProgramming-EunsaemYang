#include <iostream>

using namespace std;

int main(){
    int x = 100;
    int& y = x;
    int& z = x;
    cout << x << " " << y << " " << z;
    
    return 0;
}