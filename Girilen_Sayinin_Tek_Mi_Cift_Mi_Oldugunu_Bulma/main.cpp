#include <iostream>
using namespace std;

int main()
{
    int Number;

    cout << "Bir Sayı Girin: ";
    cin >> Number;
    cout << "Girilen Sayı " << (Number % 2 == 0 ? "Cift" : "Tek") << endl;

    return 0;
}
