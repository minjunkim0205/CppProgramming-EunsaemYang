#include <iostream>
#include <string>

using namespace std;
/*Class*/
class Person {
private:
    // Field
    string name;
public:
    // Construct
    Person() {
        this->name = "";
        cout << "default 생성자 실행" << '\n';
    }
    Person(string _str) {
        this->name = _str;
        cout << "생성자 실행" << '\n';
    }
    Person(const Person &_person) { //복사 생성자
        this->name = _person.name;
        cout << "복사 생성자 실행" << '\n';
    }
    Person(Person &&_person) { //이동 생성자
        this->name = _person.name;
        _person.name.clear();
        cout << "이동 생성자 실행" << '\n';
    }
    // Destruct
    ~Person() {
        cout << "소멸자 실행" << '\n';
    }
    // Method
    void show(string _str) {
        cout << _str << " | name = "<< this->name << '\n'; 
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