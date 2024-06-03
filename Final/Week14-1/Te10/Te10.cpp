#include <iostream>

using namespace std;
/*Class*/
class Shape
{
private:
    Shape *next; // 다음 도형
protected:
    string name; // 도형의 이름
public:
    Shape(string n = "") : next{nullptr}, name{n} {}
    virtual void draw() = 0;
    Shape *add(Shape *s)
    {
        if (next == nullptr)
        {
            next = s;
        }
        else
        {
            next->add(s);
        }
    }
    Shape *getNext()
    {
        return next;
    }
};
/*Oval class*/
class Oval : public Shape
{
private:
public:
    Oval(string s) : Shape(s) {}
    virtual void draw()
    {
        cout << "Oval[" << name << "]";
    }
};
/*Rectangle class*/
class Rectangle : public Shape
{
private:
public:
    Rectangle(string s) : Shape(s) {}
    virtual void draw()
    {
        cout << "Rectangle[" << name << "]";
    }
};
/*Triangle class*/
class Triangle : public Shape
{
private:
public:
    Triangle(string s) : Shape(s) {}
    virtual void draw()
    {
        cout << "Triangle[" << name << "]";
    }
};
/*Manege class*/
class Manage
{
public:
    void run()
    {
        Shape *p_start = NULL, *p_last = NULL;
        string choice, name_choice;
        bool startFlag = true;
        while (true)
        {
            cout << "\n생성할 도형을 선택하세요\n o:Oval, r:Rectangle, t:Triangle, 이외:finish : ";
            cin >> choice;
            if (!(choice == "o" || choice == "r" || choice == "t"))
            {
                break;
            }
            cout << " 도형의 이름을 입력하세요 : ";
            cin >> name_choice;
            switch (startFlag)
            {
            case true:
                if (choice == "o")
                {
                    p_start = new Oval(name_choice);
                }
                else if (choice == "r")
                {
                    p_start = new Rectangle(name_choice);
                }
                else if (choice == "t")
                {
                    p_start = new Triangle(name_choice);
                }
                p_last = p_start;
                startFlag = false;
                break;
            case false:
                if (choice == "o")
                {
                    p_last = p_last->add(new Oval(name_choice));
                }
                else if (choice == "r")
                {
                    p_last = p_last->add(new Rectangle(name_choice));
                }
                else if (choice == "t")
                {
                    p_last = p_last->add(new Triangle(name_choice));
                }
                break;
            }
        }
        cout << "\n연결된 모든 도형 출력" << '\n';
        Shape *p = p_start;
        while (p != nullptr)
        {
            p->draw();
            cout << " -> ";
            p = p->getNext();
        }
        cout << "end" << '\n';

        cout << "\n연결된 모든 도형 삭제" << '\n';
        p = p_start;
        while (p != nullptr)
        {
            Shape *p_next = p->getNext();
            p->draw();
            cout << "|삭제 -> ";
            delete p;
            p = p_next;
        }
        cout << "end" << '\n';
    }
};
/*Main*/
int main()
{
    Manage manage;
    manage.run();
}