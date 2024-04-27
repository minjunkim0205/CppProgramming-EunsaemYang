#include <iostream>

using namespace std;
/*Function*/
class Function {
private:
    static int count;
    int number;
public:
    // Construct
    Function() {
        this->number = this->count;
        this->count++;
        cout << "Construct | number = " << this->number << '\n';
    }
    // Destruct
    ~Function() {
        cout << "Destruct | number = " << this->number << '\n';
    }
    // Method
    int getNumber() {
        return this->number;
    }
};
int Function::count = 1;
/*Main*/
int main() {
    Function array[5];
    return 0;
}