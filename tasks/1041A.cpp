#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> laptops(n);

    for (auto& laptop : laptops)
    {
        cin >> laptop.first >> laptop.second;
    }

    sort(laptops.begin(), laptops.end(), [](auto lhs, auto rhs)
         { return lhs.first < rhs.first; });

    string ans = "Poor Alex";
    for (int i = 0; i < n - 1; ++i)
    {
        if (laptops[i].second > laptops[i + 1].second)
        {
            ans = "Happy Alex";
            break;
        }
    }

    cout << ans;
}
