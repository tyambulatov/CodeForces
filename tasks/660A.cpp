#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> mass(n);
    for (auto& a : mass)
    {
        cin >> a;
    }

    int num = 0;
    vector<int> outputOrder;
    for (int i = 0; i < mass.size() - 1; ++i)
    {
        outputOrder.push_back(mass[i]);
        if (__gcd(mass[i], mass[i + 1]) > 1)
        {
            outputOrder.push_back(562448657);
            num++;
        }
    }
    outputOrder.push_back(mass.back());

    cout << num << '\n';
    for (auto a : outputOrder)
    {
        cout << a << " ";
    }
}