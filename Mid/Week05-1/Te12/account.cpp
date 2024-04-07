#include "account.h"
#include "iostream"

namespace Bank {
    Account::Account(const std::string& name, int balance) : name(name), balance(balance) {}
    Account::~Account() {
        std::cout << name << ": object destruction" << '\n';
    }
    void Account::deposit(int amount) {
        balance += amount;
    }
    int Account::withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            return amount;
        } else {
            return 0;
        }
    }
    int Account::check() const {
        return balance;
    }
    std::string Account::getOwner() const {
        return name;
    }
}