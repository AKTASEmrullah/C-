#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); /* Programın Sürekli Aynı Sayıları Üretmesini Engelleyecektir */
    cout << rand() % 101 << endl; /* 0 İle 100 Arasında Bir Sayı Üretecektir (0 ve 100 Dahil) */

    return 0;
}
