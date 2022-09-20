#include <iostream>
using namespace std;

int main()
{
    int Multiplication;

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            Multiplication = i *j;

            if(Multiplication < 10)
            {
                cout << "0";
            }

            cout << Multiplication << " ";
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}
