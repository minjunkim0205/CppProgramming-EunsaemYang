#ifndef CPPPROGRAMMING_EUNSAEMYANG_ACCOUNT_H
#define CPPPROGRAMMING_EUNSAEMYANG_ACCOUNT_H

#include <string>

namespace Bank {
    enum class MENU {
        DEPOSIT = 1,
        WITHDRAW,
        CHECK,
        QUIT
    };

    class Account {
    private:
        std::string name;
        int balance;
    public:
        Account(const std::string& name, int balance);
        ~Account();
        void deposit(int amount);
        int withdraw(int amount);
        int check() const;
        std::string getOwner() const;
    };
}

#endif // ACCOUNT_H