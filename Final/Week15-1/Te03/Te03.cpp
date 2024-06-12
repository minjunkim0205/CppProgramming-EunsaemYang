#include <iostream>

using namespace std;

template <typename T>
/**Function */
T get(T *a, int size, int index)
{
    if (index >= 0 && index < size)
    {
        return *(a + index);
    }
    else
    {
        return 0;
    }
}
/**Main */
int main()
{
    const char name[] = "daniel";
    int array[] = {1, 2, 3};
    cout << get(name, sizeof(name) / sizeof(char), 4) << '\n';
    cout << get(array, sizeof(array) / sizeof(int), 4) << '\n';
    return 0;
}