#include <iostream>

using namespace std;
    
auto sum(int s, int e); // 함수 원형 선언

auto sum(int s, int e) {
    auto tmp = 0, res = 0;
    if(s>e) {
        tmp = e;
        e = s;
        s = tmp;
    }
    for (auto k = s; k <= e; k++) {
        res += k;
    }
    return res;
}

int main() {
    int a, b;
    cout << "Enter number a, b : ";
    cin >> a >> b;
    cout << a << " to " << b << " sum is " << sum(a, b);
    
    return 0;
}
