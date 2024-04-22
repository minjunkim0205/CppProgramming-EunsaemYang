#include <iostream>

using namespace std;
/*Class*/
class CustomCal{
private:
    int value;
public:
    // Constructor
    CustomCal(const int _value):value(_value){};
    // Method
    CustomCal& add(const int _n){
        this->value += _n;
        return *this;
    }
    void out(){
        cout << "Value : " << this->value << '\n'; 
    }
};
/*Main*/
int main(){
    CustomCal my_cal{10};
    my_cal.out();
    my_cal.add(1);
    my_cal.out();
    my_cal.add(-1);
    my_cal.add(1).add(2).add(3);
    my_cal.out();
    return 0;
}