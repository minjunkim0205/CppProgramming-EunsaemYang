#include <iostream>

using namespace std;

int main(){
    int sample [5] = {5, 10, 15, 20, 25};
    cout << *sample + 2 << endl; // 불러온 값에서 + 2
    cout << *(sample + 2); // 불러온 값의 주소에서 + 2 한 값
}