#include <iostream>

using namespace std;
/*Class*/
class Person{
private:
    // Field
    char* name;
    int id;
public:
    // Construct
    Person(char *_name, int _id) : name(_name), id(_id) {
    }
    // Copy construct
    /*
    Person(const Person &_person) : Person(_person.name, _person.id){ 여기서 _person.name, _person.id
    가 접근 가능한 이유가 궁금함. 해당 field 값들은 분명 private 영역인데 어떻게 접근이 가능한지.
    */
    Person(Person &&_person) : Person(_person.name, _person.id){ // 이동 생성자
    }
    // Destruct
    ~Person(){
        /*
        delete[] this->name; 여기서 예외가 발생하는지 궁금함. 
        또한 delete를 사용하면 안된다면 name 포인터는 어떻게 해제가 되는지도 궁금함.
        */
        //delete[] this->name;
    }
    // Method
    char* getName(){
        return this->name;
    }
    int getId(){
        return this->id;
    }
    void setName(char* _name){
        this->name = _name;
    }
    void setId(int _id){
        this->id = _id;
    }
};
/*Main*/
int main(){
    Person a{"Minjun\0", 4828};
    Person b{move(a)};
    a.setName("Changjun\0");
    a.setId(6875);
    cout << "Person a | name = " << a.getName() << ", id = " << a.getId() << '\n';
    cout << "Person b | name = " << b.getName() << ", id = " << b.getId() << '\n';
    return 0;
}