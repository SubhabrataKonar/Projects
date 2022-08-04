#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    int ori[16], n[16], i = 0, s = 0, x = 0, k = 0, c = 0;
    cout << "Enter the Credit Card Number " << endl;
    for (i = 0; i < 16; i++)
    {
        cin >> ori[i];
    }
    for (i = 0; i < 16; i++)
    {
        n[i] = ori[i] * 2;
    }
    for (i = 1; i < 16; i = i + 2)
    {
        s = s + n[i];
    }
    for (i = 0; i < 15; i = i + 2)
    {
        if (n[i] > 9)
        {
            x = n[i] % 10;
            n[i] = n[i] / 10;
            k = k + x + n[i];
        }
        else
        {
            k = k + n[i];
        }
    }
    c = (s / 2) + k;
    cout << "odd" << s / 2 << "Even" << k << "Tot" << c << endl;
    cout << "The Credit Card Number Entered ";
    for (i = 0; i < 16; i++)
    {
        cout << ori[i];
        if (i == 3 || i == 7 || i == 11)
        {
            cout << "  ";
        }
    }

    if (c % 10 == 0)
    {
        cout << " is a valid Credit card number" << endl;
    }
    else
    {
        cout << " is not a valid Credit Card Number" << endl;
    }

    return 0;
}