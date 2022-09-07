#include <iostream>
using namespace std;

int main()
{
    int Speed = 0, Distance = 0, Time = 0;

    cout << "Aracın Hızını Girin: ";
    cin >> Speed;
    cout << "Aracın Gideceği Yolun Uzunluğunu Girin (km): ";
    cin >> Distance;

    Time = Distance / Speed;
    cout << Distance << " Kilometreyi " << Speed << " Hızla " << Time << "Saatte Gidersiniz." << endl;

    return 0;
}
