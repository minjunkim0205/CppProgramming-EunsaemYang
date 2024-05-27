#include <iostream>

using namespace std;
/*Class*/
class A
{
private:
public:
    A()
    {
        cout << "생성자 A" << '\n';
    }
    A(int x)
    {
        cout << "생성자 A" << x << '\n';
    }
};
class B : public A
{
private:
public:
    B()
    {
        cout << "생성자 B" << '\n';
    }
    B(int x)
    {
        cout << "생성자 B" << x << '\n';
    }
    B(int x, int y) : A(x + y + 2)
    {
        cout << "생성자 B" << x + y + 2 << '\n';
    }
};
/*Main*/
int main()
{
    const char TYPE = '1';
    switch (TYPE)
    {
    case '1':
    {
        B b01;
        break;
    }
    case '2':
    {
        B b02(10);
        break;
    }
    case '3':
    {
        B b03(10, 20);
        break;
    }
    }
    return 0;
}