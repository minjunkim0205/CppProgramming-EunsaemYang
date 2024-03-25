#include <iostream>

using namespace std;

static void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=60, b=90;
    cout << a << ' ' << b << '\n';
    swap(a,b);
    cout << a << ' ' << b << '\n';
    return 0;
}