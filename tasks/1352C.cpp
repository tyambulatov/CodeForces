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
        int64_t n, k;
        cin >> n >> k;
        if (k * n % (n - 1) == 0)
        {
            cout << k * n / (n - 1) - 1 << '\n';
        }
        else
        {
            cout << k * n / (n - 1) << '\n';
        }
    }
}
