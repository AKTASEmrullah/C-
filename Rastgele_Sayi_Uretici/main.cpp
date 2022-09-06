#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Rastgele Sayı: " << rand() % 101 << endl;

    return 0;
}
