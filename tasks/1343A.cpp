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
        int n;
        cin >> n;
        int k = 2;
        while (true)
        {
            double x = n / (pow(2, k) - 1);

            if (floor(x) == ceil(x))
            {
                cout << static_cast<int>(x) << '\n';
                break;
            }
            ++k;
        }
    }
}
