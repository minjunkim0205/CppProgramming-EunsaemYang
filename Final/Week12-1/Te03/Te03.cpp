#include <iostream>

using namespace std;

/*Class*/
class Power // 에너지를 표현하는 파워 클래스
{
private:
    int kick;  // 발로 차는 힘
    int punch; // 주먹으로 치는 힘
public:
    // Construct
    Power(int kick = 0, int punch = 0) : kick{kick}, punch{punch}
    {
        cout << "생성자" << '\n';
    }
    // Method
    void show()
    {
        cout << "kick=" << kick << ',' << "punch=" << punch << '\n';
    }

    // Overloading assignment operator
    friend Power operator+(const Power &a, const Power &b); // B
    friend Power operator+(int in, const Power &a);        // D
    Power& operator=(const Power &b) // G
    {
        if (this != &b) // Check for self-assignment
        {
            this->kick = b.kick;
            this->punch = b.punch;
        }
        return *this;
    }
    Power operator++(int) // K (postfix increment)
    {
        Power temp = *this;
        this->kick++;
        this->punch++;
        return temp;
    }
    bool operator!() const // M
    {
        return (this->kick == 0 && this->punch == 0);
    }
};

/*Friend*/
Power operator+(const Power &a, const Power &b) // B
{
    Power temp;
    temp.kick = a.kick + b.kick;
    temp.punch = a.punch + b.punch;
    return temp;
}

Power operator+(int in, const Power &a) // D
{
    Power temp;
    temp.kick = a.kick + in;
    temp.punch = a.punch + in;
    return temp;
}

/* createObject function */
Power createObject()
{
    // 새로운 Power 객체를 생성하여 반환하는 함수
    return Power(5, 5);
}

/*Main*/
int main()
{
    char type = 'M';
    Power a(2, 3);
    Power b(3, 4);
    Power c;

    switch (type)
    {
    case 'B':
        // B. c = a + b; | a, b, c는 Power 객체, 프렌드로 사용할 연산자 함수로 작성
        c = a + b;
        c.show();
        break;
    case 'D':
        // D. b = 2 + a; | a, b는 Power 객체, 프렌드로 사용할 연산자 함수로 작성
        b = 2 + a;
        b.show();
        break;
    case 'G':
        // G. a = b; | a, b는 Power 객체, 멤버 함수로 작성
        a = b;
        a.show();
        break;
    case 'H':
        // H. a = createObject(); | a는 Power 객체, 멤버 함수로 작성
        a = createObject();
        a.show();
        break;
    case 'K':
        // K. a++; | a는 Power 객체, 멤버 함수로 작성
        a++;
        a.show();
        break;
    case 'M':
        // M. !a; | a는 Power 객체, 모든 멤버 값이 0이면 true리턴, 멤버 함수로 작성
        if (!a)
            cout << "a의 모든 멤버 값이 0입니다." << '\n';
        else
            cout << "a의 멤버 값이 0이 아닙니다." << '\n';
        break;
    }

    return 0;
}
