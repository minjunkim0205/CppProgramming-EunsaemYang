#include <iostream>

using namespace std;
/*Function*/
double circleArea(double r, double pi = 3.14){
    double result = pi * r * r;
    return result;
}
/*Main*/
int main(){
    cout << circleArea(2) << '\n';
    cout << circleArea(2, 3) << '\n';
    return 0;
}