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

int newLog(int num)
{
    int res = 0;
    for (auto a : to_string(num))
    {
        res++;
    }
    return res;
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
        map<int, int> a;
        map<int, int> b;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            a[m]++;
        }

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            b[m]++;
        }

        int cs = 0;
        while (a.size() != 0 || b.size() != 0)
        {
            auto& prA = *a.rbegin();
            auto& prB = *b.rbegin();

            if (prA.first == prB.first)
            {
                prA.second--;
                prB.second--;

                if (prA.second == 0)
                {
                    a.erase(prA.first);
                }
                if (prB.second == 0)
                {
                    b.erase(prB.first);
                }
            }
            else if (prA.first > prB.first)
            {
                int newNum = newLog(prA.first);
                int value = prA.second;
                a.erase(prA.first);
                a[newNum] += value;

                cs += value;
            }
            else if (prA.first < prB.first)
            {
                int newNum = newLog(prB.first);
                int value = prB.second;
                b.erase(prB.first);
                b[newNum] += value;

                cs += value;
            }
        }

        cout << cs << '\n';
    }
}
