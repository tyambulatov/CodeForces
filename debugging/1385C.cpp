
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
        vector<int> mass(n, 0);
        for (auto& a : mass)
        {
            cin >> a;
        }
        auto iterator = mass.end() - 1;
        while (iterator != mass.begin() && *(iterator - 1) >= *iterator)
        {
            --iterator;
        }
        while (iterator != mass.begin() && *(iterator - 1) <= *iterator)
        {
            --iterator;
        }
        cout << iterator - mass.begin() << '\n';
    }
}
