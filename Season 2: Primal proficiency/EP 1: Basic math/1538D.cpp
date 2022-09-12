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

//вектор, в который будут добавляться простые числа

vector<int> compute_primes(int n)
{
    bool sieve[n + 1];
    vector<int> primes;

    for (int i = 2; i <= n; i++)
    { //Изначально все числа не вычеркнуты.
        sieve[i] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        { //если i не вычеркнуто
            primes.push_back(i);

            for (int j = i * i; j <= n; j += i)
            { //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    return primes;
}

int factorize(int a, const vector<int>& primes)
{
    vector<int> factors;

    for (int i = 0; primes[i] <= sqrt(a); i++)
    {
        while (primes[i] != 0 && a % primes[i] == 0)
        {
            factors.push_back(primes[i]);
            a /= primes[i];
        }
    }

    if (a != 1)
    {
        factors.push_back(a);
    }

    return factors.size();
}

int main()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    vector<int> primes = compute_primes(sqrt(1000'000'000));

    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;

        int numPrmA = factorize(a, primes);
        int numPrmB = factorize(b, primes);

        if ((a == 1 && b == 1))
        {
            cout << "NO" << '\n';
            continue;
        }

        if (k == 1)
        {
            if (a != b && (a % b == 0 || b % a == 0))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            cout << '\n';
            continue;
        }

        if (k <= numPrmA + numPrmB)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }
}
