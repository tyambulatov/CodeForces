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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> evenWannabee;
        vector<int> oddWannabee;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                int num;
                cin >> num;
                if (num % 2 == 1)
                    evenWannabee.push_back(num);
            }
            else
            {
                int num;
                cin >> num;
                if (num % 2 == 0)
                    oddWannabee.push_back(num);
            }
        }
        if (evenWannabee.size() == oddWannabee.size())
        {
            cout << evenWannabee.size() << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}
