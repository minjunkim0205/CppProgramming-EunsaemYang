#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> v(5, '*');
    //A
    cout << "Vector[v] item : ";
    for(vector<char>::iterator it = v.begin(); it != v.end(); it++){ cout << *it << " "; }
    cout << '\n';
    //B
    cout << "Vector[v] item : ";
    for(auto element : v){ cout << element << " "; }
    cout << '\n';
    return 0;
}