
#include <bits/stdc++.h>

using namespace std;

int64_t solveMinFirst(const int& a, const int& b, const int& x,
                      const int& y, int n)
{
    int subtractFirst = min(a - x, n);
    n -= subtractFirst;

    if (n == 0)
    {
        return (long long)(a - subtractFirst) * (b);
    }
    else
    {
        int subtractSecond = min(b - y, n);
        return (long long)(a - subtractFirst) * (b - subtractSecond);
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        cout << min(solveMinFirst(a, b, x, y, n),
                    solveMinFirst(b, a, y, x, n))
             << '\n';
    }
}
