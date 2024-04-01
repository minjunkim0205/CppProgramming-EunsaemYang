#include <iostream>

using namespace std;

/*Class*/
class Member{
private:
    int value;
public:
    Member(){
        this->value = 10;
    };
    int getValue();
};
/**/
int Member::getValue() {
    return this->value;
}
/*Main*/
int main(){
    return 0;
}