#include <iostream>
using namespace std;

int main()
{
    int Increase;
    int Number[2];

    cout << "1. Sayıyı Girin: ";
    cin >> Number[0];
    cout << "2. Sayıyı Girin: ";
    cin >> Number[1];

    for(int i = Number[0]; i < Number[1]; i++)
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
