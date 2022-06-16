#include <bits/stdc++.h>

using namespace std;

int main()
{
    char symbol;
    int digit;

    bool notPassedFirst = true;
    while (cin >> symbol)
    {
        digit = symbol - '0';
        if (notPassedFirst && digit == 9)
        {
            cout << 9;
            notPassedFirst = false;
        }
        else
        {
            if (5 <= digit && digit <= 9)
            {
                cout << 9 - digit;
            }
            else
            {
                cout << digit;
            }
            notPassedFirst = false;
        }
    }
}
