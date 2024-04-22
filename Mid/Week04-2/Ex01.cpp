#include <iostream>

using namespace std;

class Circle{
private:
    int radius;
public:
    // Constructor
    Circle(){
        this->radius = 1;
    }
    Circle(int r){
        this->radius = r;
    }
    // Destructor
    ~Circle(){
        cout << "Dstructor circle" << '\n';
    }
    // Method
    void setRadius(int r){
        this->radius = r;
    }
    int getRadius(){
        return this->radius;
    }
    double getArea(){
        const double pi = 3.14;
        return (pi*radius*radius);
    }
};

int main(){
    Circle a{2};
    Circle *p;
    p = &a;
    cout << p->getArea() << '\n';
    return 0;
}