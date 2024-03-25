#include <iostream>

using namespace std;

void coutArray(const int *data){
    for(auto i : data){
        
    }
}

int& f(int *array, int a){
    return array[a];
}

int main(){
    int array[]={3,5,3,2,1,7};
    coutArray(array);
    
    int &rst = f(array, 3);
    rst = 8;
    coutArray(array);
    
    f(array, 3) = 60;
    coutArray(array);
    
    return 0;
}