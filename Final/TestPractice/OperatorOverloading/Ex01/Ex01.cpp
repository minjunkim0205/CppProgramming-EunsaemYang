#include <iostream>
#include <utility> // for std::move

using namespace std;

/**Class */
class User
{
private:
    string name;
public:
    User(string _name = "Nuknoen") : name(_name) {}

    // Move assignment operator
    User& operator=(User &&_user) noexcept
    {
        if (this != &_user)
        {
            this->name = std::move(_user.name);
            _user.name = "";
        }
        return *this;
    }

    // Copy assignment operator
    User& operator=(const User &_user)
    {
        if (this != &_user)
        {
            this->name = _user.name;
        }
        return *this;
    }


    // Copy constructor
    User(const User &_user) : name(_user.name)
    {

    }
};

/**Main */
int main()
{
    User a("A");
    User b = std::move(a); // Move constructor
    User c = b; // Copy constructor

    return 0;
}
