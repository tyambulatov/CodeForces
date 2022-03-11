
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
        int n, k;
        cin >> n >> k;
        if (n % 2 == 1)
        {
            if (k % 2 == 1 && k <= n)
            {

                cout << "YES\n";

                for (int i = 0; i < k - 1; ++i)
                {
                    cout << 1 << " ";
                }
                cout << n - (k - 1) << '\n';
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (k % 2 == 1)
            {
                if (n >= 2 * k)
                {

                    cout << "YES\n";

                    for (int i = 0; i < k - 1; ++i)
                    {
                        cout << 2 << " ";
                    }
                    cout << n - 2 * (k - 1) << '\n';
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                if (n >= k)
                {

                    cout << "YES\n";

                    for (int i = 0; i < k - 1; ++i)
                    {
                        cout << 1 << " ";
                    }
                    cout << n - (k - 1) << '\n';
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
}
