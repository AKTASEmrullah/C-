#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float Side[3];

    cout << "1. Kenar: ";
    cin >> Side[0];
    cout << "2. Kenar: ";
    cin >> Side[1];

    Side[2] = sqrt(pow(Side[0], 2) + pow(Side[1], 2));
    cout << "Hipotenüs: " << Side[2] << endl;

    return 0;
}
