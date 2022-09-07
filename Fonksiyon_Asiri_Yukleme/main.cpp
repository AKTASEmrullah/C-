#include <iostream>
using namespace std;

int Plus(int Num_1, int Num_2)
{
    return Num_1 + Num_2;
}

double Plus(double Num_1, double Num_2)
{
    return Num_1 + Num_2;
}

int Plus(int Num_1, int Num_2, int Num_3)
{
    return Num_1 + Num_2 + Num_3;
}

double Plus(double Num_1, double Num_2, double Num_3)
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

    cout << "1 + 2 --> " << Plus(Number[0], Number[1]) << endl;
    cout << "1 + 2 --> " << Plus(Number[0] + 0.35, Number[1] + 0.15) << endl;
    cout << "1 + 2 + 3 -->2 " << Plus(Number[0], Number[1], Number[2]) << endl;
    cout << "1 + 2 + 3 -->2 " << Plus(Number[0] + 0.25, Number[1] + 0.3, Number[2] + 0.1) << endl;

    return 0;
}
