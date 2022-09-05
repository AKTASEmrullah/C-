#include <iostream>

using namespace std;

int main()
{
    int Number = -100;

    /* 1. Yöntem -> abs */
    cout << abs(Number) << endl;

    /* 2. Yöntem -> Sayıyı -1 İle Çarpmak */
    if(Number < 0)
    {
        Number = Number * -1;
    }

    cout << Number << endl;

    return 0;
}
