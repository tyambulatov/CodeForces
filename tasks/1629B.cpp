
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if ((r - l) == 0)
        {
            if (r == 1)
            {
                cout << "NO" << '\n';
            }
            else
            {
                cout << "YES" << '\n';
            }
        }
        else if ((r - l) == 1)
        {
            if (k > 0)
            {
                cout << "YES" << '\n';
            }
        }
        else
        {
            int odd = (r - l + 1) / 2;
            int even = (r - l + 1) / 2;
            if ((r - l + 1) % 2 == 1)
            {
                if (l % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if (min(odd, even) <= k)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}
