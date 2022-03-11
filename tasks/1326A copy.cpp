
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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (i == 0)
                {
                    cout << 2;
                }
                else
                {
                    cout << 3;
                }
            }
            cout << '\n';
        }
    }
}
