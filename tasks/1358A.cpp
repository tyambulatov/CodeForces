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
        int n, m;
        cin >> n >> m;
        if (n % 2 == 1 && m % 2 == 1)
        {
            cout << (n * m / 2 + 1) << '\n';
        }
        else
        {
            cout << n * m / 2 << '\n';
        }
    }
}
