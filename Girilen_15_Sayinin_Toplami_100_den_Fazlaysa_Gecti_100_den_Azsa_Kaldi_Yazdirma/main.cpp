#include <iostream>
using namespace std;

int main()
{
    int i = 0, Total = 0;
    int Number[15];

    while(i < 15)
    {
        cout << i + 1 << ". Sayıyı Girin: ";
        cin >> Number[i];

        Total += Number[i];
        i++;
    }

    cout << "Girilen Sayıların Toplamı: " << Total << endl;
    cout << (Total >= 100 ? "Geçtiniz" : "Kaldınız") << endl;

    return 0;
}
