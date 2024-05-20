#include <iostream>

using namespace std;

/*Class*/
class SortedArray
{
private:
    // Private field
    int size; // 현재 배열의 크기
    int *p;   // 정수 배열에 대한 포인터

    // Private method
    void sort() // 오름차순 버블 정렬
    {
        if (p == nullptr || size == 0)
            return;
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (p[j] > p[j + 1])
                {
                    int temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = temp;
                }
            }
        }
    }

public:
    // Construct
    SortedArray() : p{nullptr}, size{0} // 디폴트 생성자:p는 nullptr로 size는 0으로 초기화
    {
    }

    SortedArray(int arr[], int size) : size{size} // 매개변수 생성자: 정수 배열과 크기를 전달받아 p에 저장 후 sort() 호출
    {
        p = new int[size];
        for (int i = 0; i < size; i++)
        {
            p[i] = arr[i];
        }
        this->sort();
    }

    SortedArray(const SortedArray &arr) : size{arr.size} // 복사 생성자
    {
        p = new int[arr.size];
        for (int i = 0; i < arr.size; i++)
        {
            p[i] = arr.p[i];
        }
        this->sort();
    }

    // Destruct
    ~SortedArray() // 소멸자
    {
        delete[] p;
    }

    // Public method
    SortedArray operator+(SortedArray &b) // 현재 배열에 b배열을 연결한 배열으로 수정
    {
        SortedArray result;
        result.size = this->size + b.size;
        result.p = new int[result.size];
        for (int i = 0; i < this->size; i++)
        {
            result.p[i] = this->p[i];
        }
        for (int i = 0; i < b.size; i++)
        {
            result.p[this->size + i] = b.p[i];
        }
        result.sort();
        return result;
    }

    SortedArray &operator=(const SortedArray &b) // 현재 배열에 b배열을 복사
    {
        if (this != &b)
        {
            delete[] p;
            size = b.size;
            p = new int[size];
            for (int i = 0; i < size; i++)
            {
                p[i] = b.p[i];
            }
            this->sort();
        }
        return *this;
    }

    void show(string name) // 배열의 원소 출력
    {
        cout << name << " = ";
        for (int i = 0; i < size; i++)
        {
            cout << p[i] << ' ';
        }
        cout << '\n';
    }
};

/*Main*/
int main()
{
    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;
    c = a + b;
    a.show("a");
    b.show("b");
    c.show("c");
    return 0;
}
