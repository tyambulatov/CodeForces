
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

        if (k >= n)
        {
            cout << k - n << '\n';
        }
        else
        {
            if (k % 2 == n % 2)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }
}
