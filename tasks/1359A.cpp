
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
        int n, m, k;
        cin >> n >> m >> k;
        int cardsPerPerson = n / k;
        int winner = min(cardsPerPerson, m);
        int secondMax = 0;

        m -= winner;

        if (m % (k - 1) == 0)
        {
            secondMax = m / (k - 1);
        }
        else
        {
            secondMax = m / (k - 1) + 1;
        }
        if (winner == secondMax)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << winner - secondMax << '\n';
        }
    }
}
