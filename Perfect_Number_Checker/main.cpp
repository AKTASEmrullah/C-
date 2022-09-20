#include <iostream>
using namespace std;

int main()
{
    int Number, Increase = 0;

    cout << "5'den Büyük Bir Sayı Girin: ";
    cin >> Number;

    for(int i = 1; i < Number; i++)
    {
        if(Number % i == 0)
        {
            Increase += i;
        }
    }

    cout << "Girilen Sayı Mükemmel" << (Increase == Number ? "dir." : " Değildir.") << endl;

    return 0;
}
