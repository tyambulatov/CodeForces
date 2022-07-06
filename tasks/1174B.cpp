#include <bits/stdc++.h>

using namespace std;

void massPrinter(const vector<int>& mass)
{
    bool first = true;
    for (auto num : mass)
    {
        if (!first)
        {
            cout << " ";
        }
        first = false;
        cout << num;
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> mass(n);

    int numOdd = 0;
    int numEven = 0;
    for (auto& num : mass)
    {
        cin >> num;
        if (num % 2 == 1)
        {
            numEven++;
        }
        else
        {
            numOdd++;
        }
    }

    if (numOdd == n || numEven == n)
    {
        massPrinter(mass);
    }
    else
    {
        sort(mass.begin(), mass.end());
        massPrinter(mass);
    }
}
