#ifndef CPPPROGRAMMING_EUNSAEMYANG_ACCOUNT_H
#define CPPPROGRAMMING_EUNSAEMYANG_ACCOUNT_H

namespace Bank{
    enum MENU{
        DEPOSIT = 1,
        WITHDRAW,
        CHECK,
        QUIT
    };
    class Account {
    private:
    public:
        void deposit(int &money){};
    };
}

#endif //CPPPROGRAMMING_EUNSAEMYANG_ACCOUNT_H
