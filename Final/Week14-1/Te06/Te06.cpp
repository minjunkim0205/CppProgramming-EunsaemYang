#include <iostream>

using namespace std;

class Shape
{
private:
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
private:
    const double PI = 3.14;
public:
    double getArea()
    {
        return PI;
    }
};
int main()
{
    // Shape sh;  // 1 Err
    Shape *sh; // 2
    // Circle c;  // 3 Err
    Circle *c; // 4
    return 0;
}