#include <iostream>

using namespace std;
/*Class*/
class Book
{
private:
    // Field
    string title;
    int price;

public:
    // Construct
    Book(string _title = "", int _price = 0):title{_title}, price{_price}
    {    
    }
    // Method
    void show(string _obj)
    {
        cout << _obj << " | title : " << this->title << ", price : " << this->price << '\n';
    }
    string getTitle()
    {
        return (this->title);
    }
    void operator+=(int _n)
    {
        this->price += _n;
    }
    void operator-=(int _n)
    {
        this->price -= _n;
    }
    bool operator==(int _n)
    {
        return (this->price == _n);
    }
    bool operator==(string _s)
    {
        return (this->title == _s);
    }
    bool operator==(Book _book)
    {
        return (this->title == _book.title && this->price == _book.price);
    }
};
/*Main*/
int main()
{
    Book a{"청춘", 20000}, b{"미래", 30000};
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show("a");
    b.show("b");
    Book c{"명품 C++", 30000}, d{"고품 C++", 30000};
    if (c == 30000)
    {
        cout << "명품 C++ 정가 30000원" << '\n'; // price 비교
    }
    if (c == "명품 C++")
    {
        cout << "명품 C++ 입니다." << '\n'; // 책 title 비교
    }
    if (c == d)
    {
        cout << "두 책이 같은 책입니다." << '\n'; // title, price 모두 비교
    }
    else
    {
        cout << "두 책이 다른 책입니다." << '\n';
    }
    return 0;
}