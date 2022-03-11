// #include "profile.h"

#include <bits/stdc++.h>
#include <cmath>
#include <cstdint>

using namespace std;

int main()
{
    // LOG_DURATION("main")
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long long x, n;
        cin >> x >> n;

        for (long long i = 1; i <= n; ++i)
        {
            if (x % 2 == 0)
            {
                x -= i;
                continue;
            }
            x += i;
        }
        cout << x << endl;
    }
}
