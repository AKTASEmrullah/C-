#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int Number = 0, Total_Try = 0;
    int Number_Real = rand() % 101;
    char Choose;

    while(true)
    {
        switch(Number)
        {
            case 0 :
            {
                cout << "Bir Sayi Girin: ";
                        cin >> Number;
            }
            default :
            {
                if(Number > Number_Real)
                {
                    Total_Try++;

                    cout << Number << " | Kucuk Bir Sayi Deneyin: ";
                    cin >> Number;
                }
                else if(Number < Number_Real)
                {
                    Total_Try++;

                    cout << Number << " | Buyuk Bir Sayi Deneyin: ";
                    cin >> Number;
                }
                else
                {
                    cout << "**************************************************" << endl;
                    cout << "Tebrikler, Sayiyi Dogru Tahmin Ettiniz.\nToplam " << Total_Try << " Denemede Sayiyi Dogru Tahmin Ettiniz.\nSayi Tahmin Etme Oyununu Tekrar Oynamak Ister Misiniz (E ya da H): ";
                    cin >> Choose;
                    cout << "**************************************************" << endl;

                    switch(Choose)
                    {
                        case 'E' :
                        {
                            srand(time(0));

                            Number = 0, Total_Try = 0;
                            Number_Real = rand() % 101;

                            continue;
                        }
                        case 'H' :
                        {
                            exit(EXIT_SUCCESS);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
