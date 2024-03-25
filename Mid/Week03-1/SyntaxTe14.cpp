#include <iostream>

using namespace std;

int charDistance(char a, char b){
    return (abs(static_cast<int>(a)-static_cast<int>(b)));
}

char listExam(initializer_list<char> data, char c){
    char ans = CHAR_MAX;
    for(auto element : data){
        if(charDistance(element, c) < charDistance(ans, c)){
            ans = element;
        }
    }
    return (ans);
}

int main(){
    cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' } the letters closest to h are : " ;
    cout << listExam({ 'd', 'p', 'r', 'w', 'g', 'f' }, 'h') << "\n";
    cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'} the letters closest to w are : ";
    cout << listExam({ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}, 'w') << "\n";
    
    return 0;
}