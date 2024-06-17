#include <iostream>

using namespace std;

/**Function */
class Animal
{
private:
protected:
    int age;
    string name;
public:
    Animal(int _age, string _name) : age(_age), name(_name) {}
    virtual void sound() = 0;
    void info()
    {
        cout << "Name : " << this->name << ", Age : " << this->age << '\n';
    }
};
/**Implement */
class Cat : public Animal
{
private:
protected:
public:
    Cat(int _age, string _name) : Animal(_age, _name) {}
    virtual void sound()
    {
        cout << "Meow~!" << '\n';
    }
};
class Dog : public Animal
{
private:
protected:
public:
    Dog(int _age, string _name) : Animal(_age, _name) {}
    virtual void sound()
    {
        cout << "Bow-wow!!" << '\n';
    }
};
/**Main */
int main()
{
    Animal *animals[2] = {new Cat(2, "Kitty"), new Dog(3, "Buddy")};
    animals[0]->info();
    animals[1]->info();

    animals[0]->sound();
    animals[1]->sound();

    delete animals[0];
    delete animals[1];
    return 0;
}