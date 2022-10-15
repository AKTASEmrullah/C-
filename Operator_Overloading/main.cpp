#include <iostream>
using namespace std;

class Count
{
private:
    int Value = 0;

public:
    void operator ++ ()
    {
        Value++;
    }

    void Display()
    {
        cout << "Count: " << Value << endl;
    }
};

int main()
{
    Count Count;

    ++Count;
    Count.Display();

    return 0;
}
