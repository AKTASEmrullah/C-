#include <iostream>
using namespace std;

int main()
{
    int Number[2];

    cout << "Kısa Kenarı Girin: ";
    cin >> Number[0];
    cout << "Uzun Kenarı Girin: ";
    cin >> Number[1];
    cout << "**************************************************" << endl;
    cout << "Dikdörtgenin Alanı: " << Number[0] * Number[1] << endl;
    cout << "Dikdörtgenin Çevresi: " << 2 * (Number[0] + Number[1]) << endl;

    return 0;
}
