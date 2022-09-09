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
                cout << "Bir Sayı Girin: ";
                cin >> Number;
            }
            default :
            {
                if(Number > Number_Real)
                {
                    Total_Try++;

                    cout << Number << " | Küçük Bir Sayı Deneyin: ";
                    cin >> Number;
                }
                else if(Number < Number_Real)
                {
                    Total_Try++;

                    cout << Number << " | Büyük Bir Sayı Deneyin: ";
                    cin >> Number;
                }
                else
                {
                    cout << "Tebrikler, Sayıyı Doğru Tahmin Ettiniz.\nToplam " << Total_Try << " Denemede Sayıyı Doğru Tahmin Ettiniz.\nSayı Tahmin Etme Oyununu Tekrar Oynamak İster Misiniz (E ya da H): ";
                    cin >> Choose;

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
