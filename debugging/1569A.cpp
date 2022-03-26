
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
        vector<int> prefixSumA(n + 1, 0);
        vector<int> prefixSumB(n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            char letter;
            cin >> letter;
            if (letter == 'a')
            {
                ++prefixSumA[i + 1];
            }
            else
            {
                ++prefixSumB[i + 1];
            }
            prefixSumA[i + 1] += prefixSumA[i];
            prefixSumB[i + 1] += prefixSumB[i];
        }

        int l = -1;
        int r = -1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = n; j > i + 1; --j)
            {
                if (prefixSumA[i] - prefixSumA[j] == prefixSumB[i] - prefixSumB[j])
                {
                    if ((i + 1 > l || j > r) && (abs(j - i - 1) > abs(r - l)))
                    {
                        l = i + 1;
                        r = j;
                    }
                }
            }
        }
        cout << l << " " << r << '\n';
    }
}
