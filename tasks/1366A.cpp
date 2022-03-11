
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

        int numMax = max(n, k);
        int numMin = min(n, k);

        int diff = numMax - numMin;
        if ((numMax - numMin) >= numMin)
        {
            cout << numMin << '\n';
        }
        else
        {
            int addNum = 0;
            numMin -= diff;
            if (numMin % 3 == 2)
            {
                addNum = 1;
            }
            cout << diff + 2 * (numMin / 3) + addNum << '\n';
        }
    }
}
