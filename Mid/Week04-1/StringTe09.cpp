#include <iostream>
#include <string>

using namespace std;

string removeChar(string str, char c){
    int pos = str.find(c);
    while(pos != -1){
        str.erase(pos, 1);
        pos = str.find(c);
    }
    return str;
} 
string findAndReplace(string str, string olds, string news){
    int pos = str.find(olds);
    if(pos != -1){
        str.replace(pos, olds.length(), news);
    }
    return str;
}

int main() {
    cout << "Enter string >> ";
    string str; getline(cin, str);
    cout << "Enter del string >> ";
    char c; cin >> c;
    cout << "Del string after : " << removeChar(str, c) << endl << endl;
    
    string str1 = "an old string";
    string str2("an old");
    string str3("a new");
    string strnew = findAndReplace(str1, str2, str3);
    cout << "\"" << str1 << "\" : \"" << str2 << "\"->\"" << str3 << "\" = \"" << strnew << "\"\n";
    
    return 0;
}
