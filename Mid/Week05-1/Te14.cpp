#include <iostream>

using namespace std;
/*Class*/
class Accumulator{
private:
    int value;
public:
    // Constructor
    Accumulator(int value) : value{value}{}; // p17 참고(initializer 사용해요)
    // Method
    Accumulator &add(int n);
    int get(){
        return this->value;
    }
};
/*Function*/
Accumulator &Accumulator::add(int n) {
    this->value += n;
    return *this;
}
/*Main*/
int main(){
    Accumulator acc(10);
    cout << acc.get() << '\n'; //10 출력
    acc.add(1).add(2).add(3); //acc 객체의 value는 16이 됨.
    cout << acc.get() << '\n'; //16 출력
    return 0;
}