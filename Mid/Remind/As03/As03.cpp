#include <iostream>

using namespace std;
/*Class*/
class Car{
private:
    int* number;
    string *owner;
public:
    // Construct
    Car():number(new int), owner(new string){};
    Car(const int _number, const string _owner):number(new int(_number)), owner(new string(_owner)){};
    // Destruct
    ~Car(){
        delete this->number;
        delete this->owner;
    }
    // Method
    void info(){
        cout << "Number : " << *(this->number) << ", Owner : " << *(this->owner);
    }
};
/*Class Manager*/
class ParkingTower{
private:
    Car *customer_list;
    int cur_customer_num;
public:
    // Construct
    ParkingTower(const int _max_customer):customer_list(new Car[10]), cur_customer_num(0){};
    // Destruct
    ~ParkingTower(){
        delete this->customer_list;
    }
    // Method
    void addCar(const int _number, const string _owner){
        customer_list[cur_customer_num] = Car(_number, _owner);
        cur_customer_num++;
    }
    void delCar(){
        cur_customer_num--;
    }
    void status(){
        for(int l = 0; l < cur_customer_num; l++){
            cout << "[Floor " << (l+1) << "]" << '\n';
            customer_list[l].info();
            cout << '\n';
        }
    }
};
/*Main*/
int main(){
    ParkingTower pt{10}; // Max customer 10!
    pt.status();
    pt.addCar(7594, "Minjun");
    pt.status();
    pt.addCar(1234, "TestUser01");
    pt.addCar(5678, "TestUser02");
    pt.status();
    /*
    pt.delCar();
    pt.status();
    */
    return 0;
}