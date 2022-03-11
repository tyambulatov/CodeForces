#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    /* code */
    int m, n, number;
    cin >> m >> n;
    if (m % 2 == 1 && n % 2 == 1)
    {
        number = (n * m - 1) / 2;
    }
    else
    {
        number = (n * m) / 2;
    }
    cout << number;
}
