#include <iostream>

using namespace std;
/*Function*/
class Function {
private:
    int number;
public:
    // Construct
    Function(const int _number) {
        this->number = _number;
        cout << "Construct | number = " << this->number << '\n';
    }
    // Destruct
    ~Function() {
    }
    // Method
    int getNumber() {
        return this->number;
    }
    int getNumber() const{
        return this->number;
    }
    void setNumber(const int _number) {
        this->number = _number;
    }
    void setNumber(const int _number) const{
        cout << "Can't change const class value" << '\n';
    }
};
/*Main*/
int main() {
    cout << "===== [ class : a ] =====" << '\n';
    Function a(10);
    cout << a.getNumber() << '\n';
    a.setNumber(8);
    cout << a.getNumber() << '\n';
    cout << "===== [ class : b ] =====" << '\n';
    const Function b(10);
    cout << b.getNumber() << '\n';
    b.setNumber(8);
    cout << b.getNumber() << '\n';
    return 0;
}