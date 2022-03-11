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
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        // y + z * x = k

        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x + y - x << endl;
        }
    }
}
