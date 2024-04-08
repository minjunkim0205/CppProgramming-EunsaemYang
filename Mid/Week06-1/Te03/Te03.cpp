#include <iostream>
using namespace std;
void func(int *array, int index){
    cout << *(array + index);
}
int main () {
    int sample[] = {0, 10, 20, 30, 40};
    func(sample, 2);
    return 0;
}