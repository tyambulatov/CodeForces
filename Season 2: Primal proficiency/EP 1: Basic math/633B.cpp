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

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
typedef pair<ld, ld> ptd;
typedef unsigned long long uli;

#define pb push_back
#define mp make_pair
#define mset(a, val) memset(a, val, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ft first
#define sc second
#define sz(a) int((a).size())
#define x first
#define y second

template <typename X>
inline X abs(const X& a)
{
    return (a < 0 ? -a : a);
}
template <typename X>
inline X sqr(const X& a) { return (a * a); }
template <typename T>
inline string toStr(T x)
{
    stringstream st;
    st << x;
    string s;
    st >> s;
    return s;
}
template <typename T>
inline int hasBit(T mask, int b) { return (b >= 0 && (mask & (T(1) << b)) != 0) ? 1 : 0; }
template <typename X, typename T>
inline ostream& operator<<(ostream& out, const pair<T, X>& p) { return out << '(' << p.ft << ", " << p.sc << ')'; }

inline int nextInt()
{
    int x;
    if (scanf("%d", &x) != 1)
        throw;
    return x;
}
inline li nextInt64()
{
    li x;
    if (scanf("%I64d", &x) != 1)
        throw;
    return x;
}
inline double nextDouble()
{
    double x;
    if (scanf("%lf", &x) != 1)
        throw;
    return x;
}

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fore(i, a, b) for (int i = int(a); i <= int(b); i++)
#define ford(i, n) for (int i = int(n - 1); i >= 0; i--)
#define foreach(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)

const int INF = int(1e9);
const li INF64 = li(INF) * li(INF);
const ld EPS = 1e-9;
const ld PI = ld(3.1415926535897932384626433832795);

int main()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int m;
    cin >> m;

    int numFives = 0;
    int startValue = 0;

    for (int i = 5; numFives != m; i += 5)
    {
        int num = i;
        while (num % 5 == 0)
        {
            num /= 5;
            numFives++;
        }

        if (numFives > m)
        {
            numFives = 0;
            break;
        }
        startValue = i;
    }

    if (numFives == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 5 << '\n';
        fore(i, startValue, startValue + 4)
        {
            cout << i << " ";
        }
    }
}
