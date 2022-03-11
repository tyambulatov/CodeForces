
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

        unordered_map<int, int> hash;
        int mGS = 0;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            ++hash[num];
            mGS = max(mGS, hash[num]);
        }

        int nOU = hash.size();

        if (mGS > nOU)
        {
            cout << nOU << '\n';
        }
        else if (mGS == nOU)
        {
            cout << mGS - 1 << '\n';
        }
        else
        {
            cout << mGS << '\n';
        }
    }
}
