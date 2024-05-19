#include <iostream>
#include <vector>
#include <algorithm> // for std::find

using namespace std;

class ArrayUtil
{
public:
    // s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
    static int *concat(int s1[], int size1, int s2[], int size2, int &retSize)
    {
        retSize = size1 + size2;
        int *result = new int[retSize];
        for (int i = 0; i < size1; ++i)
        {
            result[i] = s1[i];
        }
        for (int i = 0; i < size2; ++i)
        {
            result[size1 + i] = s2[i];
        }
        return result;
    }

    // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
    static int *remove(int s1[], int size1, int s2[], int size2, int &retSize)
    {
        vector<int> result;
        for (int i = 0; i < size1; ++i)
        {
            if (find(s2, s2 + size2, s1[i]) == s2 + size2)
            {
                result.push_back(s1[i]);
            }
        }
        retSize = result.size();
        int *removedArray = new int[retSize];
        for (int i = 0; i < retSize; ++i)
        {
            removedArray[i] = result[i];
        }
        return removedArray;
    }
};

int main()
{
    int xcount = 0, ycount = 0;

    // x배열의 원소의 개수(1~5)를 입력 받는다.
    cout << "Enter the number of elements for x array (1-5): ";
    cin >> xcount;

    // 입력 받은 수만큼 x배열을 동적 생성한다.
    int *x = new int[xcount];

    // 정수를 입력 받아 x배열에 저장한다.
    cout << "Enter the elements of x array: ";
    for (int i = 0; i < xcount; ++i)
    {
        cin >> x[i];
    }

    // y배열의 원소의 개수(1~5)를 입력 받는다.
    cout << "Enter the number of elements for y array (1-5): ";
    cin >> ycount;

    // 입력 받은 수만큼 y배열을 동적 생성한다.
    int *y = new int[ycount];

    // 정수를 입력 받아 y배열에 저장한다.
    cout << "Enter the elements of y array: ";
    for (int i = 0; i < ycount; ++i)
    {
        cin >> y[i];
    }

    int retsize = 0;

    // concat() 함수를 호출한다.
    int *conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);
    cout << "\nx배열과 y배열을 연결한 배열은 ";
    for (int i = 0; i < retsize; ++i)
    {
        cout << conarr[i] << ' ';
    }
    cout << '\n';

    // remove() 함수를 호출한다.
    int *remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);
    cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
    for (int i = 0; i < retsize; ++i)
    {
        cout << remarr[i] << ' ';
    }
    cout << '\n';

    // 동적 할당된 모든 변수를 해제 한다.
    delete[] x;
    delete[] y;
    delete[] conarr;
    delete[] remarr;

    return 0;
}