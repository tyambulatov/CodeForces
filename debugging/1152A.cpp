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

        string s;
        cin >> s;

        string ans = "NO";
        for (int i = 0; i < n; ++i)
        {
            char c;
            cin >> c;
            if (c == 'o')
            {
                ans = "YES";
            }
        }

        cout << ans << '\n';
    }
}
