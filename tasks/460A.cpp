#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{
    int n, m;
    cin >> n >> m;
    int day = 1;
    int newSocksCoeff = 1;

    while (true)
    {
        if (n == 0)
        {
            --day;
            break;
        }
        --n;
        if (day == newSocksCoeff * m)
        {
            ++n;
            ++newSocksCoeff;
        }
        ++day;
    }
    cout << day;
}
