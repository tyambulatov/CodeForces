#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{

    /* code */
    int n;
    cin >> n;
    vector<int> programmers;
    vector<int> math;
    vector<int> pe;
    for (int i = 1; i <= n; ++i)
    {
        int specialization;
        cin >> specialization;
        if (specialization == 1)
        {
            programmers.push_back(i);
        }
        else if (specialization == 2)
        {
            math.push_back(i);
        }
        else
        {
            pe.push_back(i);
        }
    }
    int numOfTeams = min(programmers.size(), min(math.size(), pe.size()));
    cout << numOfTeams << endl;
    if (numOfTeams > 0)
    {
        for (int i = 0; i < numOfTeams; ++i)
        {
            cout << programmers[i] << " " << math[i] << " " << pe[i] << endl;
        }
    }
}
