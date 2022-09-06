#include <iostream>
using namespace std;

int main()
{
    int Rows, Columns;

    cout << "Satır: ";
    cin >> Rows;
    cout << "Sütun: ";
    cin >> Columns;

    for(int i = 1; i <= Rows; i++)
    {
        if(i == 1 || i == Rows)
        {
            for(int j = 1; j <= Columns; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";

            for(int j = 1; j < Columns - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
