#include <iostream>

using namespace std;

/*Class*/
class Hallym{
    string dept;
public:
    Hallym(string d); //매개변수값을 멤버 변수로 초기화
    string getDept(); //멤버 변수 값 반환
};
/*Override*/
Hallym::Hallym(std::string d) {
    this->dept = d;
}
string Hallym::getDept() {
    return this->dept;
}
/*Main*/
int main(){
    return 0;
}