#include <iostream>

using namespace std;

template <typename T>
/**Function */
T max(T x, T y) // <- int max(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
/**Main */
int main()
{
    cout << max(1, 2) << '\n';
    return 0;
}