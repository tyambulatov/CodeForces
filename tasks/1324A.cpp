
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
        int num;
        cin >> num;

        vector<int> fuild(num);
        int minHeight = 1000;
        for (auto& a : fuild)
        {
            cin >> a;
            minHeight = min(minHeight, a);
        }

        string ans = "YES";
        for (auto num : fuild)
        {
            if ((num - minHeight) % 2 == 1)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << '\n';
    }
}
