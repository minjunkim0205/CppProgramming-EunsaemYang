#include <iostream>

using namespace std;
/*Class*/
class Pizza {
    string *size;
public:
    Pizza() : size(new string) {};
    ~Pizza(){
        cout << "Destructor) I had it all." << '\n';
        delete this->size;
    }
    void setSize(string s){
        this->size = new string(s);
    }
    string getSize(){
        return *(this->size);
    }
};
/*Class Manager*/
class PizzaManager {
private:
    int number_of_pizza{};
    string pizza_size;
    Pizza *pizza;
public:
    PizzaManager(){
        cout << "Number of pizza>>";
        cin >> number_of_pizza;
        pizza = new Pizza[number_of_pizza];
        cout << "Enter pizza size>>";
        cin >> pizza_size;
        for(int i = 0; i < number_of_pizza; i++){
            pizza[i].setSize(pizza_size);
        }
    }
    ~PizzaManager(){
        delete[] pizza;
    }
    void status(){
        for(int i = 0; i < number_of_pizza; i++){
            cout << i << ") " << pizza[i].getSize() << " Pizza is yummy" << '\n';
        }
    }
};
/*Main*/
int main() {
    PizzaManager pm;
    pm.status(); //Pizza 클래스 타입의 배열의 각 요소마다 getSize() 호출.
    return 0;
}