
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
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int maxN = (int)floor(S / n);
        int additionalN = b / n;
        int interval = b % n;
        if (S - n * maxN <= interval && a + additionalN >= maxN)
        {
            cout << "YES\n";
        }
        else if (additionalN >= 1 && a + additionalN - 1 >= maxN)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
