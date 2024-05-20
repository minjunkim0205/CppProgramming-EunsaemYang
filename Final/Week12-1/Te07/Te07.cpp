#include <iostream>

using namespace std;

/*Class*/
class Matrix
{
private:
    // Field
    int ar[4];
public:
    // Construct
    Matrix(int a1, int a2, int b1, int b2)
    {
        ar[0] = a1;
        ar[1] = a2;
        ar[2] = b1;
        ar[3] = b2;
    }
    Matrix()
    {
        for(int& e : ar){ e = 0;}
    }
    // Method
    void show(string name)
    {
        cout << name << " = { ";
        for(const int e : ar){ cout << e << ' '; }
        cout << "}" << '\n';
    }
    // Override
    Matrix operator+(const Matrix &b)
    {
        Matrix c; 
        for(int i = 0; i < 4; i++){ c.ar[i] = this->ar[i] + b.ar[i]; }
        return c;
    }
    Matrix operator+=(const Matrix &b)
    {
        for(int i = 0; i < 4; i++){ this->ar[i] += b.ar[i]; }
        return *this;
    }
    void operator>>(int x[])
    {
        for(int i = 0; i < 4; i++){ x[i] = this->ar[i]; }
    }
    Matrix operator<<(int y[])
    {
        for(int i = 0; i < 4; i++){ this->ar[i] = y[i]; }
        return *this;
    }
};

/*Main*/
int main()
{
    Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
    c = a + b;
    a.show("a");
    b.show("b");
    c.show("c");
    a += b;
    a.show("a");
    int x[4], y[4] = {5, 6, 7, 8};
    a >> x; // a의 각 원소를 배열 x에 복사.
    b << y; // 배열 y의 원소 값을 b의 각 원소에 설정
    cout << "x = { ";
    for (int i = 0; i < 4; i++){ cout << x[i] << ' '; }
    cout << "}" << '\n';
    b.show("b");
    return 0;
}
