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

    sort(mass.rbegin(), mass.rend());

    vector<int> loopedMass(n);

    if (mass[0] >= (mass[1] + mass[2]))
    {
        cout << "NO";
    }
    else
    {

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                loopedMass[i / 2] = mass[i];
            }
            else
            {
                loopedMass[n - 1 - i / 2] = mass[i];
            }
        }

        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i)
        {
            if (i != 0)
            {
                cout << " ";
            }
            cout << loopedMass[i];
        }
    }
}
