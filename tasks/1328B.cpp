
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    map<int64_t, int64_t> numGroups;
    for (int i = 0; i <= pow(10, 5); ++i)
    {
        numGroups[((long long)i * (i - 1) / 2)] = i;
    }

    while (t--)
    {
        int64_t n, k;
        cin >> n >> k;

        int64_t posFirst = numGroups.lower_bound(k)->second - 1;
        int64_t posSecond = k - ((posFirst * (posFirst - 1)) / 2);
        posFirst += 1;

        for (int i = 0; i < n; ++i)
        {
            if (i == (n - posFirst) || (i == (n - posSecond)))
            {
                cout << 'b';
            }
            else
            {
                cout << 'a';
            }
        }
        cout << '\n';
    }
}
