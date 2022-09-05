#include <iostream>

using namespace std;

int main()
{
    int Numbers[] = {1, 3, 4, 10, 25, 100, 30};
    int MIN_Value = Numbers[0], MAX_Value = Numbers[0];

    for(int i = 1; i < (sizeof(Numbers) / sizeof(int)); i++)
    {
        if(Numbers[i] < MIN_Value)
        {
            MIN_Value = Numbers[i];
        }
        else if(Numbers[i] > MAX_Value)
        {
            MAX_Value = Numbers[i];
        }
    }

    cout << "Minimum: " << MIN_Value << endl;
    cout << "Maximum: " << MAX_Value << endl;

    return 0;
}
