#include <iostream>

using namespace std;
/*Class*/
class Accumulator{
private:
    // Field
    int value;
public:
    // Construct
    Accumulator(int val) : value{val} {
    }
    // Method
    Accumulator &add(int n){
        this->value += n;
        return *(this);
    }
    int get(){ 
        return this->value; 
    }
};
/*Main*/
int main(){
    Accumulator acc{10};
    cout << acc.get() << endl; //10 출력
    acc.add(1).add(2).add(3); //acc 객체의 value는 16이 됨.
    cout << acc.get() << endl; //16 출력
    return 0;
}