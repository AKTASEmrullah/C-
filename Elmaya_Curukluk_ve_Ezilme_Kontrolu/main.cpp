#include <iostream>
using namespace std;

int main()
{
    bool Apple_Rotten = false, Apple_Crushed = false;
    bool Lamp_Red, Lamp_Yellow, Lamp_Green;

    if(Apple_Rotten)
    {
        Lamp_Red = true;
        cout << "Elma Çürük Çıktı." << endl;
    }
    else if(Apple_Crushed)
    {
        Lamp_Yellow = true;
        cout << "Elma Ezilmiş Çıktı." << endl;
    }
    else
    {
        Lamp_Green = true;
        cout << "Elma Temiz Çıktı." << endl;
    }

    return 0;
}
