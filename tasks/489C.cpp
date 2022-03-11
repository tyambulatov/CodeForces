#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

void MinNumPrinter(int m, int s)
{
    --s;
    for (int i = m; i > 0; --i)
    {
        if (i == m)
        {
            if (s > (i - 1) * 9)
            {
                cout << 1 + s - (i - 1) * 9;
                s -= s - (i - 1) * 9;
            }
            else
            {
                cout << 1;
            }
        }
        else
        {
            if (s > (i - 1) * 9)
            {
                cout << s - (i - 1) * 9;
                s -= s - (i - 1) * 9;
            }
            else
            {
                cout << 0;
            }
        }
    }
    cout << " ";
}

void MaxNumPrinter(int m, int s)
{
    for (int i = m; i > 0; --i)
    {
        if (s == 0)
        {
            cout << 0;
        }
        else if (s > 9)
        {
            cout << 9;
            s -= 9;
        }
        else if (s <= 9)
        {
            cout << s;
            s -= s;
        }
    }
}

int main()
{
    int m, s;
    cin >> m >> s;

    int sMin = (m == 1) ? 0 : 1;
    int sMax = 9 * m;
    if (s < sMin || s > sMax)
    {
        cout << "-1 -1";
    }
    else
    {
        // int minNum = pow(10, m - 1) + Converter(s - 1);
        // int maxNum = pow(10, m) - 1 - Converter(sMax - s);
        // cout << minNum << " " << maxNum;
        if (s == 0)
        {
            cout << "0 0";
        }
        else
        {

            MinNumPrinter(m, s);
            MaxNumPrinter(m, s);
        }
    }
}

// 999999999991
// 999999999991