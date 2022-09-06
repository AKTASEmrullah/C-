#include <iostream>
using namespace std;

int main()
{
    int Note = 0;

    while(Note < 0 || Note > 100)
    {
        cout << "Notunuzu Girin: ";
        cin >> Note;
    }

    if(Note >= 94)
    {
        cout << "Notunuz: A+" << endl;
    }
    else if(Note >= 87)
    {
        cout << "Notunuz: A" << endl;
    }
    else if(Note >= 79)
    {
        cout << "Notunuz: B+" << endl;
    }
    else if(Note >= 70)
    {
        cout << "Notunuz: B" << endl;
    }
    else if(Note >= 60)
    {
        cout << "Notunuz: C+" << endl;
    }
    else if(Note >= 50)
    {
        cout << "Notunuz: C" << endl;
    }
    else if(Note >= 45)
    {
        cout << "Notunuz: D" << endl;
    }
    else if(Note >= 40)
    {
        cout << "Notunuz: D+" << endl;
    }
    else
    {
        cout << "Notunuz: F" << endl;
    }

    return 0;
}
