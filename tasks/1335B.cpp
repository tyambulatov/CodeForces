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
        int n, a, b;
        cin >> n >> a >> b;
        string result = {};
        for (int i = 0; i < n; ++i)
        {
            result += char('a' + i % b);
        }
        cout << result << '\n';
    }
}
