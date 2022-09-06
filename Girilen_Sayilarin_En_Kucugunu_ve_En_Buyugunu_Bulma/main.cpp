#include <iostream>
using namespace std;

int main()
{
    int Numbers[] = {};

    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Sayıyı Girin: ";
        cin >> Numbers[i];
    }

    int MIN_Value = Numbers[0], MAX_Value = Numbers[0];

    for(int i = 1; i < 5; i++)
    {
        if(Numbers[i] > MAX_Value)
        {
            MAX_Value = Numbers[i];
        }

        if(Numbers[i] < MIN_Value)
        {
            MIN_Value = Numbers[i];
        }
    }

    cout << "Minimum: " << MIN_Value << endl;
    cout << "Maximum: " << MAX_Value << endl;

    return 0;
}
