#include <iostream>
using namespace std;

int main()
{
    int Number, Increase = 0;

    cout << "Bir Sayı Girin: ";
    cin >> Number;

    for(int i = 2; i < Number; i++)
    {
        if(Number % i == 0)
        {
            Increase++;
        }
    }

    cout << "Girilen Sayı Asal" << (Increase == 0 ? "dır." : " Değildir.") << endl;

    return 0;
}
