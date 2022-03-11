
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

        vector<int> a(n);
        for (auto& num : a)
        {
            cin >> num;
        }

        vector<pair<int, int>> ab(n);
        for (int i = 0; i < n; ++i)
        {
            int mun;
            cin >> mun;
            ab[i] = {a[i], mun};
        }

        sort(ab.begin(), ab.end());
        for (int i = 0; i < n; ++i)
        {
            if (ab[i].first <= k)
            {
                k += ab[i].second;
            }
            else
            {
                break;
            }
        }

        cout << k << '\n';
    }
}
