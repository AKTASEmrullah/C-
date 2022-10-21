#include <iostream>
using namespace std;

int main()
{
    int Number, Number_Real;

    while(true)
    {
        srand(time(NULL));

        Number_Real = rand() % 101;

        cout << "1 Ile 100 Arasinda Bir Sayi Girin: ";
        cin >> Number;

        if(Number < Number_Real)
        {
            int Difference = Number_Real - Number;

            if(Difference < 10)
            {
                cout << "Sanslisiniz Efendim." << endl;
            }
            else if(Difference < 25)
            {
                cout << "Sansa Yakinsiniz, Pes Etmeyin!" << endl;
            }
            else
            {
                cout << "Bahtin Yok Senin :(" << endl;
            }
        }
        else if(Number > Number_Real)
        {
            int Difference = Number - Number_Real;

            if(Difference < 10)
            {
                cout << "Sanslisiniz Efendim." << endl;
            }
            else if(Difference < 25)
            {
                cout << "Sansa Yakinsiniz, Pes Etmeyin!" << endl;
            }
            else
            {
                cout << "Bahtin Yok Senin :(" << endl;
            }
        }
        else
        {
            cout << "Sans Denilince Akla Siz Geliyorsunuz, Muhtesemsiniz :)" << endl;
        }
    }

    return 0;
}
