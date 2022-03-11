
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    cin.ignore(1);

    while (t--) // O(100)
    {
        int n;
        cin >> n;
        deque<int> mapper;
        set<int> unique;
        set<int> possibleMasses;
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            unique.insert(num);
            for (auto mass : unique)
            {
                possibleMasses.insert(mass + num);
            }
            mapper.push_back(num);
        }

        sort(mapper.begin(), mapper.end());
        int maxTeams = 0;
        for (auto sumMass : possibleMasses)
        {
            deque<int> contain = mapper;
            int teams = 0;
            deque<int>::iterator itBegin = contain.begin();

            while (itBegin != contain.end())
            {
                int a = *itBegin;
                ++itBegin;
                deque<int>::iterator it = lower_bound(itBegin, contain.end(), sumMass - a);
                if (it != contain.end() && *it == sumMass - a)
                {
                    teams++;
                    contain.erase(it);
                }
                contain.erase(itBegin - 1);
            }

            maxTeams = max(maxTeams, teams);
        }

        cout << maxTeams << '\n';
    }
}
