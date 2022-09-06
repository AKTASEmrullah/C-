#include <iostream>
using namespace std;

int main()
{
    int Number = 1, Factorial;

    cout << "Bir Sayı Girin: ";
    cin >> Factorial;

    for(int i = 2; i <= Factorial; i++)
    {
        Number *= i;
    }

    cout << Number << endl;

    return 0;
}
