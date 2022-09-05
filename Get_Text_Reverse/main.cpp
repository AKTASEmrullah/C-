#include <iostream>

using namespace std;

int main()
{
    string Text = "emrullah";

    /* 1. Yöntem - rbegin & rend */
    Text = string(Text.rbegin(), Text.rend());
    cout << Text << endl;

    /* 2. Yöntem - For */
    for(int i = Text.size(); i != 0; i--, cout << Text[i]);
    cout << endl;

    return 0;
}
