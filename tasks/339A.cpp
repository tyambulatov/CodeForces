#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> mass;

    char symbol;

    while (std::cin >> symbol)
    {
        if (symbol != '+')
        {
            mass.push_back(symbol - '0');
        }
    }

    sort(mass.begin(), mass.end());

    bool flag = true;
    for (auto num : mass)
    {
        if (!flag)
        {
            cout << '+';
        }
        flag = false;
        cout << num;
    }
}
