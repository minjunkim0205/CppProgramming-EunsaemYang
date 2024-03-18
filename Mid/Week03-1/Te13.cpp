#include <iostream>
//#include <iomanip>

using namespace std;

int main(){
    cout << "Enter float plz : ";
    double float_data; cin >> float_data;
    cout << "\n";
    cout << "integer part : " << static_cast<int>(float_data) << "\n";
    //cout << setprecision(2);
    cout << "decimal part : " << (float_data - static_cast<int>(float_data)) << "\n";
    
    return 0;
}