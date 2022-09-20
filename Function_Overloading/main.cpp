#include <iostream>
using namespace std;

int Increase(int Num_1, int Num_2)
{
    return Num_1 + Num_2;
}

int Increase(int Num_1, int Num_2, int Num_3)
{
    return Num_1 + Num_2 + Num_3;
}

int main()
{
    int Number[3];

    cout << "1. Sayıyı Girin: ";
    cin >> Number[0];
    cout << "2. Sayıyı Girin: ";
    cin >> Number[1];
    cout << "3. Sayıyı Girin: ";
    cin >> Number[2];
    cout << endl << "**************************************************" << endl;
    cout << "1 + 2 --> " << Increase(Number[0], Number[1]) << endl;
    cout << "1 + 2 + 3 --> " << Increase(Number[0], Number[1], Number[2]) << endl;
    cout << "**************************************************" << endl << endl;

    return 0;
}
