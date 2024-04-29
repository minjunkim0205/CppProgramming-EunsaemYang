#include <iostream>

using namespace std;
/*Class*/
class Account{
private:
    // Field
    int balance; // 잔액
public:
    // Construct
    Account(int _deposit) : balance{_deposit} {
    }
    // Method
    int getBalance() {
        return this->balance;
    }
    void setBalance(int _deposit) {
        this->balance = _deposit;
    }
    void show(){
        cout << "잔액은 " << balance << "원 입니다." << '\n';
    }
};
/*Function*/
static void increaseBy(Account &_account, int _deposit){
    _account.setBalance(_account.getBalance() + _deposit);
}
/*Main*/
int main(){
    Account acc{500};
    cout << "입금 전 ";
    acc.show();
    cout << "입금액 >> ";
    int in; cin >> in;
    increaseBy(acc, in);
    cout << "입금 후 ";
    acc.show();
    return 0;
}