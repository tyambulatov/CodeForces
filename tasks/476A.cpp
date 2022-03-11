
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int maxSteps = n;
    int minSteps = (n % 2 == 0) ? n / 2 : n / 2 + 1;

    int numSteps = -1;
    for (int i = minSteps; i <= maxSteps; ++i)
    {
        if (i % m == 0)
        {
            numSteps = i;
            break;
        }
    }

    cout << numSteps;
}
