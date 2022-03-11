
#include <bits/stdc++.h>

using namespace std;

void CoutNumWOZeroes(const vector<int>& v)
{
    bool notPassedZeroes = true;
    for (auto num : v)
    {
        if (notPassedZeroes && num == 0)
        {

            continue;
        }
        notPassedZeroes = false;
        cout << num;
    }
    cout << '\n';
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n);
        cin.ignore(1);
        for (auto& num : x)
        {
            num = cin.get() - '0';
        }

        vector<int> a;
        vector<int> b;

        bool passedEquality = false;
        for (auto num : x)
        {
            switch (num)
            {
            case 0:
                a.push_back(0);
                b.push_back(0);
                continue;

            case 1:
                if (!passedEquality)
                {
                    a.push_back(1);
                    b.push_back(0);
                    passedEquality = true;
                }
                else
                {
                    a.push_back(0);
                    b.push_back(1);
                }
                continue;

            case 2:
                if (!passedEquality)
                {
                    a.push_back(1);
                    b.push_back(1);
                }
                else
                {
                    a.push_back(0);
                    b.push_back(2);
                }
                continue;
            }
        }
        CoutNumWOZeroes(a);
        CoutNumWOZeroes(b);
    }
}
