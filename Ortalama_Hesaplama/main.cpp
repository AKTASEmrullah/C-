#include <iostream>
using namespace std;

int main()
{
    int Avarage;
    int Note[2];

    cout << "1. Yazılı Notu: ";
    cin >> Note[0];
    cout << "2. Yazılı Notu: ";
    cin >> Note[1];

    Avarage = (Note[0] + Note[1]) / 2;

    cout << "Ortalamanız: " << Avarage << endl;

    if(Avarage >= 50)
    {
        cout << "Dersten Geçtiniz, Tebrikler." << endl;
    }
    else
    {
        cout << "Dersten Kaldınız, Yazıklar Olsun." << endl;
    }

    return 0;
}
