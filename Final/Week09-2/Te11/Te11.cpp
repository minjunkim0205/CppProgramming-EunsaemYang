#include <iostream>
#include <cstring>

using namespace std;
/*Class*/
class Person {
private:
    // Field
    char* name;
public:
    // Construct
    Person() {
        this->name = "";
        cout << "default 생성자 실행" << '\n';
    }
    Person(char* _str) {
        this->name = new char[strlen(_str)+1];
        strcpy(this->name, _str);
        cout << "생성자 실행" << '\n';
    }
    Person(const Person &_person) { //복사 생성자
        this->name = new char[strlen(_person.name)+1];
        strcpy(this->name, _person.name);
        cout << "복사 생성자 실행" << '\n';
    }
    Person(Person &&_person) { //이동 생성자
        this->name = _person.name;
        _person.name = nullptr;
        cout << "이동 생성자 실행" << '\n';
    }
    // Destruct
    ~Person() {
        delete[] this->name;
        cout << "소멸자 실행" << '\n';
    }
    // Method
    void show(char* _str) {
        if (this->name != nullptr) {
        cout << _str << " | name = "<< this->name << '\n'; 
        } else {
            cout << _str << " | name = " << '\n'; 
        }
    }
};
/*Main*/
int main(){
    cout << "-1----------" << '\n';
    Person dan{"daniel"};
    Person ben = Person{"benny"};
    cout << "-2----------" << '\n';
    Person mvdan = move(dan);
    cout << "-3----------" << '\n';
    Person cpben = ben;
    Person cpmvdan{mvdan};
    cout << "-4----------" << '\n';
    dan.show("dan");
    ben.show("ben");
    mvdan.show("mvdan");
    cpben.show("cpben");
    cpmvdan.show("cpmvdan");
    return 0;
}