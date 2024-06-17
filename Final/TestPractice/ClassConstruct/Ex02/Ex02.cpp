#include <iostream>

using namespace std;
/*Function*/
//왜 Rvalue ref로만 코드가 정상 작동하는지 궁금함
void message_print(const string &&_str)
{
    cout << "message = " << _str << '\n';
}
/*Main*/
int main()
{
    string str_a = "apple";
    string str_b = "banana";
    message_print(move(str_a)); // move()로 Rvalue 로 변환
    message_print(str_a + str_b);
    //message_print(str_a); Err
    return 0;
}