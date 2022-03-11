
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
        int essence;
        cin >> essence;

        int water = 100 - essence;
        int numSteps = essence / __gcd(essence, water) + water / __gcd(essence, water);
        cout << numSteps << '\n';
    }
}
