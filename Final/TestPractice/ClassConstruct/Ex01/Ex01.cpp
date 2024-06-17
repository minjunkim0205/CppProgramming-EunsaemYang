#include <iostream>
#include <cstring>

using namespace std;
/*Class*/
class Person
{
private:
    char *name;
    int id;
public:
    // Construct
    Person(char *_name, int _id) : id(_id)
    {
        this->name = new char[strlen(_name) + 1];
        strcpy(this->name, _name);
    }
    // Deep copy construct
    Person(const Person &_person) : id(_person.id)
    {
        this->name = new char[strlen(_person.name) + 1];
        strcpy(this->name, _person.name);
    }
    // Move construct
    Person(Person &&_person) : name(_person.name), id(_person.id)
    {
        _person.name = nullptr;
        _person.id = NULL;
    }
    // Destruct
    ~Person()
    {
        delete[] this->name;
    }
    // Method
    char *getName()
    {
        if(this->name == nullptr)
        {
            return ("");
        }
        else
        {
            return (this->name);
        }
    }
    int getId()
    {
        return (this->id);
    }
};
/*Main*/
int main()
{
    Person a("Minjun", 4828);
    Person b(a);
    Person x("Minju", 2048);
    Person y(move(x));
    cout << "name = " << a.getName() << ", id = " << a.getId() << '\n';
    cout << "name = " << b.getName() << ", id = " << b.getId() << '\n';
    cout << "name = " << x.getName() << ", id = " << x.getId() << '\n';
    cout << "name = " << y.getName() << ", id = " << y.getId() << '\n';
    return 0;
}