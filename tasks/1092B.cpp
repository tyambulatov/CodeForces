#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> mass(n);
    for (int& num : mass)
    {
        cin >> num;
    }

    sort(mass.begin(), mass.end());

    int tasks = 0;

    for (int i = 0; i < n / 2; ++i)
    {
        tasks += (mass[2 * i + 1] - mass[2 * i]);
    }

    cout << tasks;
}
