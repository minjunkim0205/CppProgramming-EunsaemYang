#include <iostream>

using namespace std;
/*Class*/
class MusicBox
{
private:
    // Field
    string *music_list;
    int number_of_music;

public:
    // Construct
    MusicBox(const int _number_of_music) : number_of_music(_number_of_music), music_list(new string[this->number_of_music])
    {
    }
    // Destruct
    ~MusicBox()
    {
        delete[] this->music_list;
    }
    // Method
    void add(const int _index, const string _title)
    {
        this->music_list[_index] = _title;
    }
    void play()
    {
        for (int i = 0; i < number_of_music; i++)
        {
            cout << "=> play() : Title = " << this->music_list[i] << '\n';
        }
    }
};

/*Class Manager*/
class MusicManager
{
private:
    MusicBox *mb;
public:
};

/*Main*/
int main()
{

    return 0;
}