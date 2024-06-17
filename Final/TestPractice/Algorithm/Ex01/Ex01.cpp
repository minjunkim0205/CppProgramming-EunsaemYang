#include <iostream>
#include <vector>
#include <algorithm> // for std::find

/**Class */
class MyArray
{
private:
public:
    static void init(int *&_array, int &_size)
    {
        std::cout << "Enter the number of elements for array >> ";
        std::cin >> _size;
        _array = new int[_size];
        for(int i = 0; i < _size; i++)
        {
            std::cin >> _array[i];
        }
    }
    static void show(int *_array, int _size, char _endl='\0')
    {
        for(int i = 0; i < _size; i++)
        {
            std::cout << _array[i] << ' ';
        }
        std::cout << _endl;
    }
    static int *concat(int *_array_x, int *_array_y, int _size_x, int _size_y, int *&_array_result, int &_size_result)
    {
        _size_result = _size_x + _size_y;
        _array_result = new int[_size_result];
        int i = 0;
        for(; i < _size_x; i++)
        {
            _array_result[i] = _array_x[i];
        }
        for(; i < _size_result; i++)
        {
            _array_result[i] = _array_x[i-_size_x];
        }
        return (_array_result);
    }
};
/**Main */
int main()
{
    int *x = nullptr, *y = nullptr;
    int x_size, y_size;
    MyArray::init(x, x_size);
    MyArray::init(y, y_size);
    
    MyArray::show(x, x_size, '\n');
    MyArray::show(y, y_size, '\n');

    int *z;
    int z_size;
    z = MyArray::concat(x, y, x_size, y_size, z, z_size);
    MyArray::show(z, z_size, '\n');
    
    delete[] x;
    delete[] y;
    delete[] z;
    
    return 0;
}