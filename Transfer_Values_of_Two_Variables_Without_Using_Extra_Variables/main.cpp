#include <iostream>
using namespace std;

int main()
{
    int Number_1 = 10;
    int Number_2 = 25;

    Number_1 += Number_2;
    Number_2 = Number_1 - Number_2;
    Number_1 = Number_1 - Number_2;

    cout << "Number 1: " << Number_1 << "\nNumber 2: " << Number_2 << endl;

    return 0;
}
