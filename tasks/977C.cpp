#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> mass(n);

    for (auto& num : mass)
    {
        cin >> num;
    }

    sort(mass.begin(), mass.end());

    if (k == 0)
    {
        if (mass[0] == 1)
        {
            cout << "-1";
        }
        else
        {
            cout << "1";
        }
    }
    else if (k == n)
    {
        cout << mass.back();
    }
    else
    {
        int lhn = mass[k - 1];
        int rhn = mass[k];
        if (lhn == rhn)
        {
            cout << "-1";
        }
        else
        {
            cout << lhn;
        }
    }
}
