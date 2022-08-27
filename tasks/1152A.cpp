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
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << '\n';
        }
        else if (a < b)
        {
            if (abs(a - b) % 2 == 1)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 2 << '\n';
            }
        }
        else
        {
            if (abs(a - b) % 2 == 1)
            {
                cout << 2 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }
}
