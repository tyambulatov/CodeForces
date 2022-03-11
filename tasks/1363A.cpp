
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
        int n, x;
        cin >> n >> x;
        unordered_map<string, int> hash;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (a % 2 == 1)
            {
                ++hash["odd"];
            }
            else
            {
                ++hash["even"];
            }
        }

        string ans = "No";
        // if list have an odd number
        if (hash.count("odd") == 1)
        {
            --hash["odd"];
            if ((x - 1) <= 2 * (hash["odd"] / 2) + hash["even"])
            {
                if (x % 2 == 0)
                {
                    if (hash["even"] == 0)
                    {
                        ans = "No";
                    }
                    else
                    {
                        ans = "Yes";
                    }
                }
                else
                {
                    ans = "Yes";
                }
            }
        }

        cout << ans << '\n';
    }
}
