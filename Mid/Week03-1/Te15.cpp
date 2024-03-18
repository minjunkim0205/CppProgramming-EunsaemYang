#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array<int, 5> data{};
    cout << "Enter Integer" << "\n";
    for(auto &e : data){
        cin >> e;
    }
    cout << "\n";
    cout << "Array : ";
    for(auto e : data){
        cout << e << " ";
    }
    cout << "\n";
    cout << "Sorted array : ";
    sort(data.begin(), data.end(), less<>()); // greater<>() 
    for(auto e : data){
        cout << e << " ";
    }
    cout << "\n";
    return 0;
}