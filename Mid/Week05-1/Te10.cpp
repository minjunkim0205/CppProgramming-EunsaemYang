#include <iostream>

using namespace std;
/*Class*/
class Person{
private:
    // Field
    string name;
    int age;
public:
    // Constructor
    Person(){
        this->name = "Anonymous";
        this->age = 0;
        cout << "Constructor " << this->name << "," << this->age << '\n';
    }
    Person(const string &name, const int &age){
        this->name = name;
        this->age = age;
        cout << "Constructor " << this->name << "," << this->age << '\n';
    }
    // Method
    string getName(){
        return this->name;
    }
    // Destructor
    ~Person(){
        cout << "Destructor " << this->name << '\n';
    }
};
/*Main*/
int main(){
    Person baby;
    Person child("benny", 10);
    cout << "baby name = " << baby.getName() << endl;
    cout << "child name = " << child.getName() << endl;
    return 0;
}