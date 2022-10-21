#include <iostream>
using namespace std;

int main()
{
    int Number[2];

    cout << "Dogru Sayisini Girin: ";
    cin >> Number[0];
    cout << "Yanlis Sayisini Girin: ";
    cin >> Number[1];
    cout << "**************************************************" << endl;
    cout << "Dogru: " << Number[0] << endl << "Yanlis: " << Number[1] << endl << "NET: " << Number[0] - (Number[1] / 3) << endl;
    cout << "**************************************************" << endl;

    return 0;
}
