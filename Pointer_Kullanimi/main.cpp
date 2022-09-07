#include <iostream>
using namespace std;

int main()
{
    int Number = 10;
    int *Pointer = &Number;

    cout << "**************************************************" << endl;
    cout << "Number: " << Number << endl;
    cout << "Number Adresi: " << Pointer << endl;
    cout << "Pointer Adresi: " << &Pointer << endl;
    cout << "Pointer Adresinin Gösterdiği Değer: " << *Pointer << endl;
    cout << "**************************************************" << endl;

    return 0;
}
