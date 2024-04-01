#include <iostream>

using namespace std;

/*Class*/
class Sample {
private :
    int x;
public:
    int getX() const;
};
/*Main*/
int main(){
    // Sample s1(4); // 메게변수를 가지는 생성자가 없음.
    // Sample s2(); // s2라는 함수의 원형으로 인식되서.
    Sample s3{}; // 가능(이니셜라이즈)
    Sample s4; // 가능(디폴트 생성자 호출)
    return 0;
}