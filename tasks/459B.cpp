
#include <bits/stdc++.h>

using namespace std;

int64_t factorial(const int& n)
{
    if (n < 2)
        return n;

    return n * factorial(n - 1);
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int64_t> uniqueBuity;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        ++uniqueBuity[num];
    }

    auto itMin = uniqueBuity.begin();
    auto itMax = --uniqueBuity.end();
    cout << itMax->first - itMin->first << " ";

    if (itMin == itMax)
    {
        cout << (itMax->second) * (itMax->second - 1) / 2;
    }
    else
    {
        cout << (--uniqueBuity.end())->second * uniqueBuity.begin()->second;
    }
}
