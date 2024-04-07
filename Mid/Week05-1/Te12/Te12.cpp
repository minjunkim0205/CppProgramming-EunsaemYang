#include <iostream>
#include "account.h"

using namespace std;
using Bank::Account;
using Bank::MENU;
/*Main*/
int main() {
    cout << "20235128 MinjunKim" << '\n';
    Account a("C++", 0); //예금주명 string name; 잔액 int balance;
    int menu, money;
    do {
        cout << "--------------------------------------------" << '\n';
        cout << "menu : 1.Deposit, 2.Withdrawal, 3.Check, 4.Quit >> ";
        cin >> menu;
        if (menu == static_cast<int>(MENU::QUIT))
            break;
        switch (menu) {
            case (static_cast<int>(MENU::DEPOSIT)):
                cout << "Deposit amount >> ";
                cin >> money;
                a.deposit(money);
                cout << a.getOwner() << "\'s deposit amount is : " << money << '\n';
                cout << a.getOwner() << "\'s balance is : " << a.check() << '\n'; //두 함수 모두 const 함수 break;
                break;
            case (static_cast<int>(MENU::WITHDRAW)):
                cout << "Withdrawal amount >> ";
                cin >> money;
                cout << a.getOwner() << "\'s withdrawal amount is : " << a.withdraw(money) << '\n';
                cout << a.getOwner() << "\'s balance is : " << a.check() << '\n';
                break;
            case (static_cast<int>(MENU::CHECK)):
                cout << a.getOwner() << "\'s balance is : " << a.check() << '\n';
                break;
        }
    } while (true);
    return 0;
}