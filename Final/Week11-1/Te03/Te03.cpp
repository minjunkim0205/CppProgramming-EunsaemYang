#include <iostream>

using namespace std;
/*Class*/
class Power
{
    // Field
    int kick;
    int punch;
public:
    // Construct
    Power(int kick = 0, int punch = 0) : kick{kick}, punch{punch}
    {
        cout << "Construct" << '\n';
    }
    // Method
    void show()
    {
        cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
    }
    // A. c = a + b; //a, b, c는 Power 객체 //멤버 함수로 작성
    Power operator+(const Power &_power)
    {
        Power result{this->kick + _power.kick, this->punch + _power.punch};
        return (result);
    }
    // C. b = a + 2; //a, b는 Power 객체 //멤버 함수로 작성
    Power operator+(const int _n)
    {
        Power result{this->kick + _n, this->punch + _n};
        return (result);
    }
    // E. a == b; //a, b는 Power 객체 //멤버 함수로 작성
    bool operator==(const Power &_power)
    {
        return (this->kick == _power.kick && this->punch == _power.punch);
    }
    // F+. c = a += b; //a, b는 Power 객체 //멤버 함수로 작성
    Power operator+=(const Power &_power)
    {
        this->kick += _power.kick;
        this->punch += _power.punch;
        return *(this);
    }
};
/*Main*/
int main()
{
    switch ('F')
    {
    case 'A':
        Power a{2, 2};
        Power b{2, 2};
        Power c{3, 3};
        // A. c = a + b; //a, b, c는 Power 객체 //멤버 함수로 작성
        cout << "[ A. c = a + b; ]" << '\n';
        c = a + b;
        c.show();
        break;
    case 'B':
        Power a{2, 2};
        Power b{2, 2};
        Power c{3, 3};
        // C. b = a + 2; //a, b는 Power 객체 //멤버 함수로 작성
        cout << "[ C. b = a + 2; ]" << '\n';
        b = a + 2;
        b.show();
        break;
    case 'E':
        Power a{2, 2};
        Power b{2, 2};
        Power c{3, 3};
        // E. a == b; //a, b는 Power 객체 //멤버 함수로 작성
        cout << "[ E. a == b; ]" << '\n';
        cout << (a==b) << '\n';
        break;
    case 'F':
        Power a{2, 2};
        Power b{2, 2};
        Power c{3, 3};
        // F+. c = a += b; //a, b는 Power 객체 //멤버 함수로 작성
        cout << "[ F(응용). c = a += b; ]" << '\n';
        c = a += b;
        c.show();
        a.show();
        break;
    case 'N':
        Power *e = new Power{3,5};
        Power *f = new Power{2,4};
        Power g{0, 0};
        // N. main()이 다음과 같은 경우 operator+=()와 show()의 호출은 어떻게 해야 하나요?
        g = *e += *f;
        (*e).show();
        e->show();
        (*f).show();
        f->show();
        break;
    }
    return 0;
}