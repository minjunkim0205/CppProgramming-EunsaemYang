#include <iostream>

using namespace std;
/*Function*/
int sum(int a, int b){
    int result = a + b;
    return result;
}
double sum(double a, double b){
    double result = a + b;
    return result;
}
/*Main*/
int main(){
    cout << sum(1, 2) << '\n';
    cout << sum(1.42, 23.12) << '\n';
    return 0;
}