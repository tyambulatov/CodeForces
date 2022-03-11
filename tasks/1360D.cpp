
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) // O(100)
    {
        int n, k;
        cin >> n >> k;

        if (k >= n)
        {
            cout << 1 << '\n';
        }
        else
        {
            int ans = n;
            for (int i = 1; i * i <= n; ++i)
            {
                if (n % i == 0)
                {
                    if (i <= k)
                    {
                        ans = min(ans, n / i);
                    }
                    if (n / i <= k)
                    {
                        ans = min(ans, i);
                    }
                }
            }
            cout << ans << '\n';
        }
    }
}
