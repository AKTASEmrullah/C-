#include <iostream>
using namespace std;

int main()
{
    int Number, Number_Lenght;

    cout << "Bir Sayı Girin: ";
    cin >> Number;

    for(Number_Lenght = 0; Number > 0; Number_Lenght++)
    {
        Number = Number / 10;
    }

    cout << "Girilen Sayı " << Number_Lenght << " Rakamdan Oluşmaktadır." << endl;

    return 0;
}
