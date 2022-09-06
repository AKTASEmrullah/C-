#include <iostream>
using namespace std;

int main()
{
    int Number[2];

    cout << "1. Sayıyı Girin: ";
    cin >> Number[0];
    cout << "2. Sayıyı Girin: ";
    cin >> Number[1];

    if(Number[0] > Number[1])
    {
        cout << "1 > 2" << endl;
    }
    else if(Number[0] < Number[1])
    {
        cout << "1 < 2" << endl;
    }
    else
    {
        cout << "1 = 2" << endl;
    }

    return 0;
}
