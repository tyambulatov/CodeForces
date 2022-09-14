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
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <memory.h>

#define all(x) x.begin(), x.end()

using namespace std;
using namespace std::chrono;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // auto start = steady_clock::now();

    const int N = 1e7;

    vector<int> res1;

    vector<int> spf(N + 1);
    iota(all(spf), 0);
    spf[1] = 0;
    for (int z = 4; z < N; z += 2)
        spf[z] = 2;
    for (int z = 3; z * z < N; z += 2)
        if (spf[z] == z)
            for (int y = z * z; y < N; y += z * 2)
                if (spf[y] == y)
                    spf[y] = z;

    int num;
    cin >> num;
    do
    {
        cout << "1";
        while (num > 1)
        {
            cout << " x " << spf[num];
            num /= spf[num];
        }
        cout << '\n';

    } while (cin >> num);
}
