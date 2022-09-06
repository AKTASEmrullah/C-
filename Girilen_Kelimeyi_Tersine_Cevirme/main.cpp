#include <iostream>
using namespace std;

int main()
{
    string Text;
    cout << "Bir Kelime Girin: ";
    getline(cin, Text);
    cout << "Girilen Kelimenin Tersi: " << string(Text.rbegin(), Text.rend()) << endl;

    return 0;
}
