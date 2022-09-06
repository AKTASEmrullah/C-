#include <iostream>
using namespace std;

int main()
{
    int r;

    cout << "Kürenin Yarıçapını Girin: ";
    cin >> r;

    cout << "Kürenin Alanı: " << 4 * 3 * (r * r) << endl;
    cout << "Kürenin Hacmi: " << (4 * 3 * (r * r * r)) / 3<< endl;

    return 0;
}
