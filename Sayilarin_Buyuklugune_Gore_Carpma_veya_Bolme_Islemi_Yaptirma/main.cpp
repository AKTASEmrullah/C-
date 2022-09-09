#include <iostream>
using namespace std;

int main()
{
    double Number_1 = 10;
    double Number_2 = 25;
    double Number_3;

    if(Number_1 > Number_2)
    {
        Number_3 = Number_1 * Number_2;
        cout << "Sonuç: " << Number_3 << endl;
    }
    else if(Number_2 > Number_1)
    {
        Number_3 = Number_1 / Number_2;
        cout << "Sonuç: " << Number_3 << endl;
    }
    else
    {
        cout << "İşlem Yapılamıyor." << endl;
    }

    return 0;
}
