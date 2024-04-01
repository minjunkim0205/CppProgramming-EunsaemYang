#include <iostream>

using namespace std;

class Account{
private:
public:
    // Constructor
    Account(); // 디폴트 생성자
    Account(const Account & acc);   // 복사 생성자(acc객체를 this객체에 복사):
                                    // (메개변수는 무조건 자기와 같은 타입(객체 복사 시에 사용))
    // Destructor
    ~Account(); // 소멸자
};

int main(){
    return 0;
}