#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> v;
    //A
    v.emplace_back(3.1);
    cout << "Vector[v] item : ";
    for(auto element : v){ cout << element << ", "; }
    cout << '\n';
    //B
    cout << "Vector[v] size : " << v.size() << '\n';
    //C
    v.erase(v.begin());
    cout << "Vector[v] item : ";
    for(auto element : v){ cout << element << ", "; }
    cout << '\n';
    return 0;
}