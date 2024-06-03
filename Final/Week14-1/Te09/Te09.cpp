#include <iostream>

using namespace std;
/*Class*/
class Shape
{
private:
protected:
    string name;       // 도형의 이름
    int width, height; // 도형이 내접하는 사각형
public:
    Shape(string n = "", int w = 0, int h = 0) : name{n}, width{w}, height{h} {}
    string getName()
    {
        return name; // 이름 리턴
    }
    virtual double getArea() = 0; // 3.14*width*height; //width*height; //width*height/2;
};
/*Oval class*/
class Oval : public Shape
{
private:
public:
    Oval(string s, int w, int h) : Shape(s, w, h) {}
    virtual double getArea()
    {
        return 3.14*width*height;
    }
};
/*Rectangle class*/
class Rectangle : public Shape
{
private:
public:
    Rectangle(string s, int w, int h) : Shape(s, w, h) {}
    virtual double getArea()
    {
        return width*height;
    }
};
/*Triangle class*/
class Triangle : public Shape
{
private:
public:
    Triangle(string s, int w, int h) : Shape(s, w, h) {}
    virtual double getArea()
    {
        return width*height/2;
    }
};
/*Main*/
int main()
{
    Shape *p[3];
    p[0] = new Oval("호떡", 10, 20);
    p[1] = new Rectangle("노트", 30, 40);
    p[2] = new Triangle("삼각자", 30, 40);
    for (Shape *shape : p)
    {
        cout << shape->getName() << "의 넓이는 " << shape->getArea() << '\n';
    }
    for (Shape *shape : p)
    {
        delete shape;
    }
}
