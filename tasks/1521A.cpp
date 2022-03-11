
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
        uint64_t a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a << " " << b * a << " " << (b + 1) * a << '\n';
        }
    }
}
