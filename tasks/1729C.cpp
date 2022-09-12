#undef NDEBUG
#ifdef gridnevvvit
#define _GLIBCXX_DEBUG
#endif

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

#include <algorithm>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <complex>
#include <functional>
#include <limits>
#include <numeric>

#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <memory.h>

using namespace std;

int getIndex(char c)
{
    return c - 'a' + 1;
}

int main()

{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        for (size_t i = 1; i < s.size() - 1; i++)
        {
            mp[s[i]].push_back(i + 1);
        }

        deque<int> res;
        if (s[0] > s.back())
        {
            auto itStart = mp.lower_bound(s.back());
            auto itEnd = mp.upper_bound(s[0]);

            for (auto it = itStart; it != itEnd; it++)
            {
                vector<int> vs = it->second;
                for (auto a : it->second)
                {
                    res.push_front(a);
                }
            }
        }
        else
        {
            auto itStart = mp.lower_bound(s[0]);
            auto itEnd = mp.upper_bound(s[s.size() - 1]);

            for (auto it = itStart; it != itEnd; it++)
            {
                vector<int> vs = it->second;
                for (auto a : it->second)
                {
                    res.push_back(a);
                }
            }
        }

        cout << abs(s.back() - s[0]) << " " << res.size() + 2 << '\n';
        cout << "1 ";
        for (int i = 0; i < res.size(); i++)
        {

            cout << res[i] << " ";
        }
        cout << s.size() << '\n';
    }
}
