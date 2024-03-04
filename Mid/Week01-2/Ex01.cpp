//
// Created by mjk on 2024-03-04.
//
#include <iostream>
#include <vector>

using namespace std;

/*Main*/
int main() {
    cout << "Enter array size >> " << '\n';
    int size;
    cin >> size;
    vector<int> data(size);

    for (auto &element: data) {
        cin >> element;
    }

    for (auto element: data) {
        cout << element << " ";
    }

    return 0;
}