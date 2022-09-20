#include <iostream>
using namespace std;

int main()
{
    int Number[2];
    char Operator;

    cout << "1. Sayıyı Girin: ";
    cin >> Number[0];
    cout << "2. Sayıyı Girin: ";
    cin >> Number[1];
    cout << endl << "**************************************************" << endl;
    cout << "1. Toplama\n2. Çıkarma\n3. Çarpma\n4. Bölme" << endl;
    cout << "**************************************************" << endl;
    cout << endl << "Hangi İşlemi Yapmak İstiyorsunuz (Sembölü Yazın): ";
    cin >> Operator;
    cout << endl << "**************************************************" << endl << endl;

    switch(Operator)
    {
        case '+' :
        {
            cout << "Toplama İşleminin Sonucu: " << Number[0] + Number[1] << endl;
            break;
        }
        case '-' :
        {
            cout << "Çıkarma İşleminin Sonucu: " << Number[0] - Number[1] << endl;
            break;
        }
        case '*' :
        {
            cout << "Çarpma İşleminin Sonucu: " << Number[0] * Number[1] << endl;
            break;
        }
        case '/' :
        {
            cout << "Bölme İşleminde Kalan: " << Number[0] % Number[1] << endl;
            cout << "Bölme İşleminin Sonucu: " << Number[0] / Number[1] << endl;
            break;
        }
        default :
        {
            cout << "Geçersiz Değer Girildi." << endl;
            break;
        }
    }

    return 0;
}
