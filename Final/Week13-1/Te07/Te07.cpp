#include <iostream>

using namespace std;
/*Class*/
class BaseArray
{
private:
    // Field
    int capacity; // 동적 할당된 메모리의 총 용량
    int *mem;     // 동적 할당된 메모리
protected:
    // Construct
    BaseArray(int capacity = 100)
    {
        this->capacity = capacity;
        mem = new int[capacity];
    }
    // Destruct
    ~BaseArray()
    {
        delete[] mem;
    }
    // Method
    void put(int index, int val)
    {
        mem[index] = val;
    }
    int get(int index)
    {
        return mem[index];
    }
    int getCapacity()
    {
        return capacity;
    }
};
class MyQueue : public BaseArray
{
private:
    // Feild
    int head; // 데이터를 넣을 위치는 head
    int tail; // 데이터 꺼내는 위치는 tail+1
    int size; // 현재 큐 안에 있는 데이터의 개수
public:
    // Construct
    MyQueue(int capacity) : BaseArray(capacity), head(0), tail(-1), size(0) {}
    // Method
    void enqueue(int n)
    {
        if (size < getCapacity())
        {
            put(head, n);
            head = (head + 1) % getCapacity();
            size++;
        }
        else
        {
            cout << "Queue is full" << '\n';
        }
    }
    int dequeue()
    {
        if (size > 0)
        {
            tail = (tail + 1) % getCapacity();
            size--;
            return get(tail);
        }
        else
        {
            cout << "Queue is empty" << '\n';
            return -1;
        }
    }
    int capacity()
    {
        return getCapacity();
    }
    int length()
    {
        return size;
    }
};
/*Main*/
int main()
{
    int capacity;
    cout << "큐의 전체 용량은? ";
    cin >> capacity;
    MyQueue mq(capacity);
    cout << "큐의 용량 = " << mq.capacity() << '\n';

    int cnt, n, i;
    cout << "\n큐에 저장할 정수 개수는? ";
    cin >> cnt;
    for (i = 0; i < cnt; i++)
    {
        cout << " " << i << ") ";
        cin >> n;
        mq.enqueue(n); // 큐에 데이터 넣기
    }
    cout << "큐의 현재 크기 = " << mq.length() << '\n';
    cout << "\ndequeue = " << mq.dequeue(); // 큐에서 꺼내 출력
    cout << "\ndequeue = " << mq.dequeue(); // 큐에서 꺼내 출력
    cout << "\n큐의 현재 크기 = " << mq.length() << '\n';
    cout << "\n큐에 저장할 정수 개수는? ";
    cin >> cnt;
    for (i = 0; i < cnt; i++)
    {
        cout << " " << i << ") ";
        cin >> n;
        mq.enqueue(n); // 큐에 데이터 넣기
    }
    cout << "\n큐의 원소를 순서대로 꺼내 출력 하면...";
    while (mq.length() != 0)
    {
        cout << mq.dequeue() << ' '; // 큐에서 꺼내 출력
    }
    cout << '\n';
    cout << "큐의 용량 = " << mq.capacity() << '\n';
    cout << "큐의 현재 크기 = " << mq.length() << '\n';
    return 0;
}