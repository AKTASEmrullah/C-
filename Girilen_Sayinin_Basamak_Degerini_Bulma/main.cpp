#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int Number, Number_RAM, Number_Lenght, pow_Value;
    string Step_Names[] = {"Birler", "Onlar", "Yüzler", "Binler", "Onbinler", "Yüzbinler"};

    cout << "Bir Sayı Girin: ";
    cin >> Number;
    Number_RAM = Number;

    for(Number_Lenght = -1; Number_RAM > 0; Number_Lenght++)
    {
        Number_RAM = Number_RAM / 10;
    }

    for(int i = Number_Lenght; i >= 0; i--)
    {
        pow_Value = pow(10, Number_Lenght);
        cout << Step_Names[Number_Lenght] << ": " << Number / pow_Value << endl;
        Number -= (Number / pow_Value) * pow_Value;
        Number_Lenght--;
    }

    return 0;
};
