#include <iostream>

using namespace std;

class Base
{
public:
    void f()
    {
        cout << "Base::f() called" << '\n';
    }
};
class Derived : public Base
{
public:
    void f()
    {
        cout << "Derived::f() called" << '\n';
    }
};
int main()
{
    Derived d;
    Derived *pDer = &d;
    pDer->f();
    Base *pBase = pDer; // 업 케스팅
    pBase->f();
}