#include <iostream>

using namespace std;
/*Class*/
class Array{
private:
    const int capacity;
    int size;
    int *arr;
public:
    Array(const int capacity) : capacity(capacity), size(0), arr(new int[this->capacity]) {};
    ~Array(){
        delete[] arr;
    }
    void insert(const int value){
        if (size < capacity){
            arr[size] = value;
            size++;   
        } else {
            cout << "Can't add data " << value << ". array is full." << '\n';
        }
    }
    void print() const{
        cout << "arr =";
        for(int i = 0; i < size; ++i) {
            cout << '\t' << arr[i];
        }
        cout << '\n';
    }
};
/*Main*/
int main(){
    int count;
    cout << "array size>>";
    cin >> count;
    Array array1(count); //크기가 count인 배열 생성
    for (int i = 0; i < count; i++){
        array1.insert(i+10);
    }
    array1.print();
    array1.insert(34);
    return 0;
}