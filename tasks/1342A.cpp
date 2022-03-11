#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <numeric>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t x, y;
        cin >> x >> y;

        int64_t a, b;
        cin >> a >> b;

        int stepToZero = (2 * a >= b) ? b : 2 * a;
        if (x == y)
        {
            cout << stepToZero * x << '\n';
        }
        else if (x < y)
        {
            cout << stepToZero * x + (y - x) * a << '\n';
        }
        else
        {
            cout << stepToZero * y + (x - y) * a << '\n';
        }
    }
}
