#include <iostream>

using namespace std;

/*Class*/
class Rectangle{
private:
    int length;
    int height;
public:
    Rectangle (int len, int wid);
};
/*Override*/
Rectangle::Rectangle (int len, int wid) : length(len), height(wid){}
/*Main*/
int main(){
    return 0;
}