#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int Number[10];

    for(int i = 0; i < (sizeof(Number) / sizeof(int)); i++)
    {
        Number[i] = rand() % 101;
        cout << i + 1 << ". Elemanın Değeri: " << Number[i] << endl;
    }

    return 0;
}
