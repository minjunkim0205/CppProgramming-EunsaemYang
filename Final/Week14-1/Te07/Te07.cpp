#include <iostream>

using namespace std;

class Shape
{
private:
public:
    virtual void draw()
    {
        cout << "--Shape--";
    }
};

class Circle : public Shape
{
private:
public:
    virtual void draw()
    {
        Shape::draw(); // 기본 클래스의 draw() 호출
        cout << "Circle" << '\n';
    }
};

int main()
{
    Shape *p_shape = new Circle();
    p_shape->Shape::draw(); // 기본 클래스 draw() 호출
    cout << '\n';
    p_shape->draw(); // Circle 클래스의 draw() 호출
    delete p_shape; // 동적 할당한 메모리 해제
    return 0;
}
