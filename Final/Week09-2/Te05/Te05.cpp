#include <iostream>
#include <cstring>

using namespace std;
/*Class*/
class Person{
private:
    // Field
    char* name;
    int id;
public:
    // Construct
    Person(char *_name, int _id){
        this->name = new char[strlen(_name) + 1];
        strcpy(this->name, _name);
        this->id = _id;
    }
    // Copy construct
    /*
    Person(Person &_person) 생성자 에서 _person.name, _person.id가 접근 가능한 이유가 궁금함. 
    해당 field 값들은 분명 private 영역인데 어떻게 접근이 가능한지.
    */
    Person(Person &_person){ // 복사 생성자
        this->name = new char[strlen(_person.name) + 1];
        strcpy(this->name, _person.name);
        this->id = _person.id;
    }
    // Destruct
    ~Person(){
        delete[] this->name;
    }
    // Method
    char* getName(){
        if (this->name != nullptr) {
            return this->name;
        } else {
            return "";
        }
    }
    int getId(){
        return this->id;
    }
    void setName(char* _name){  
        delete[] this->name;
        this->name = new char[strlen(_name) + 1];
        strcpy(this->name, _name);
    }
    void setId(int _id){
        this->id = _id;
    }
};
/*Main*/
int main(){
    Person a{"Minjun\0", 4828};
    Person b{a};
    cout << "Person a | name = " << a.getName() << ", id = " << a.getId() << '\n';
    cout << "Person b | name = " << b.getName() << ", id = " << b.getId() << '\n';
    return 0;
}