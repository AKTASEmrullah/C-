#include <iostream>
using namespace std;

int main()
{
    int Increase;

    for(int i = 2; i <= 100; i++)
    {
        Increase = 0;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                Increase += j;
            }
        }

        if(Increase == 0)
        {
            cout << i << ", Bir Asal Sayıdır" << endl;
        }
    }

    return 0;
}
