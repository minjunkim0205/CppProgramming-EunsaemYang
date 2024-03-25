#include <iostream>

using namespace std;

enum Game{
    Rock = 1, 
    Paper, 
    Scissors
};

int main(){
    cout << "[ Name : MinjunKim, Id : 20235128 ]" << '\n';
    while (true){
        int n; cin >> n;
        if(n == Game::Rock){
            cout << "\tRock" << '\n';
        }else if (n == Game::Paper){
            cout << "\tPaper" << '\n';
        }else if (n == Game::Scissors){
            cout << "\tScissors" << '\n';
        }else{
            break;
        }
    }
    
    return 0;
}