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

    cout << mass[(n - 1) / 2];
}
