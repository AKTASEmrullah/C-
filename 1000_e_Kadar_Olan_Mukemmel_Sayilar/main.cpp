#include <iostream>
using namespace std;

int main()
{
    int Increase;

    for(int i = 6; i <= 1000; i++)
    {
        Increase = 0;

        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                Increase += j;
            }
        }

        if(i == Increase)
        {
            cout << i << ", Bir Mükemmel Sayıdır" << endl;
        }
    }

    return 0;
}
