#include <iostream>
#include <string>

using namespace std;

/**Function */
class Shape
{
private:
protected:
    string name;
    double width, height;
public:
    Shape(string _name, double _width, double _height) : name(_name), width(_width), height(_height){}
    virtual string getInfo()
    {
        return ("Name : " + name + ", Size:(" + to_string(this->width) + "," + to_string(this->height) + ")");
    }
    virtual double getArea() = 0;
};
/**Implement */
class Square : public Shape
{
private:
public:
    Square(string _name, double _width, double _height) : Shape(_name, _width, _height){}
    virtual string getInfo()
    {
        return (Shape::getInfo() + ", Type : Square");
    }
    virtual double getArea()
    {
        return (this->width * this->height);
    }
};
class Triangle : public Shape
{
private:
public:
    Triangle(string _name, double _width, double _height) : Shape(_name, _width, _height){}
    virtual string getInfo()
    {
        return (Shape::getInfo() + ", Type : Triangle");
    }
    virtual double getArea()
    {
        return (this->width * this->height / 2);
    }
};
/**Main */
int main()
{
    Shape *shapes[2] = {new Square("A", 10, 4), new Triangle("B", 10, 4)};

    for(Shape *_element : shapes)
    {
        cout << _element->getInfo() << '\n';
        cout << _element->getArea() << '\n';
    }

    for(Shape *_element : shapes)
    {
        delete _element;
    }

    return 0;
}