#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

int BottleCounter(const vector<int>& shops, int money)
{
    auto it = upper_bound(shops.begin(), shops.end(), money);
    return it - shops.begin();
}

int main()
{

    int n;
    cin >> n;
    vector<int> x(n);
    for (auto& it : x)
        cin >> it;

    int q;
    cin >> q;
    vector<int> m(q);
    for (auto& it : m)
        cin >> it;

    sort(x.begin(), x.end());
    for (int money : m)
    {
        cout << BottleCounter(x, money) << endl;
    }
}
