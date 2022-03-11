
#include <bits/stdc++.h>

using namespace std;

int trueCeil(const int& a, const int& b)
{
    return (int)ceil(a / b) + ((a % b >= 1) ? 1 : 0);
}

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

        if (k >= n)
        {

            cout << trueCeil(k, n) << '\n';
        }
        else
        {

            cout << trueCeil((trueCeil(n, k) * k), n) << '\n';
        }
    }
}
