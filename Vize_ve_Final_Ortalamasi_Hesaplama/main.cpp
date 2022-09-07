#include <iostream>
using namespace std;

int main()
{
    int Note[2];

    cout << "Vize Notunu Girin: ";
    cin >> Note[0];
    cout << "Final Notunu Girin: ";
    cin >> Note[1];
    cout << "**************************************************" << endl;
    cout << "Ortalamanız: " << (Note[0] * 0.3) + (Note[1] * 0.7) << endl;

    return 0;
}
