#include <iostream>
using namespace std;

int main()
{
    int Number, Number_Inverse, RAM;

    cout << "Bir Sayi Girin: ";
            cin >> Number;
    cout << "Girilen Sayinin Tersi: ";

    while(Number > 0)
    {
        Number_Inverse = Number % 10;
        cout << Number_Inverse;
        Number /= 10;
    }

    cout << endl;

    return 0;
}
