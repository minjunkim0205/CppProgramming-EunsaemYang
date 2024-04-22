#include <iostream>

using namespace std;
/*Class*/
class Rect{
private:
    int length;
    int height;
public:
    //Construct
    Rect(const int _length, const int _height):length(_length), height(_height){};
    //Function
    void Out(){
        cout << "Length : " << this->length << ", Height : " << this->height << '\n';
    }
    void SetLength(const int _length);
    void SetHeight(const int _height);
};
void Rect::SetLength(const int _length){
    this->length = _length;
}
//void Rect::SetHeight(const int _height):height(_height){} <- 이 부분 질문!
/*Main*/
int main(){
    Rect my_rect{10, 10};
    my_rect.Out();
    my_rect.SetLength(12);
    my_rect.Out();
    return 0;
}