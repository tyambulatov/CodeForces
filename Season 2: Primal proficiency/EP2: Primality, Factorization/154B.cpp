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

            for (int64_t j = (int64_t)i * (int64_t)i; j <= n; j += i)
            { //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    return primes;
}

set<int> factorize(int a, const vector<int>& primes)
{
    set<int> factors;

    for (int i = 0; primes[i] <= sqrt(a); i++)
    {
        while (primes[i] != 0 && a % primes[i] == 0)
        {
            factors.insert(primes[i]);
            a /= primes[i];
        }
    }

    if (a != 1)
    {
        factors.insert(a);
    }

    return factors;
}

int main()

{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> primes = compute_primes(n);

    vector<int> activePlants(n + 1, 0);
    vector<set<int>> factorsPlants(n + 1);

    for (int i = 2; i <= n; ++i)
    {
        factorsPlants[i] = factorize(i, primes);
    }

    while (m--)
    {
        char ch;
        int a;
        cin >> ch >> a;
        cin.ignore(1);

        if (ch == '+')
        {
            if (activePlants[a] == a)
            {
                cout << "Already on";
            }
            else
            {
                int numContr = 0;
                for (auto primeDivider : factorsPlants[a])
                {

                    if (activePlants[primeDivider] != 0)
                    {
                        numContr = activePlants[primeDivider];
                        break;
                    }
                }

                if (numContr == 0)
                {
                    activePlants[a] = a;
                    for (auto primeDivider : factorsPlants[a])
                    {
                        activePlants[primeDivider] = a;
                    }
                    cout << "Success";
                }
                else
                {
                    cout << "Conflict with " << numContr;
                }
            }
        }
        else if (ch == '-')
        {
            string res = "Already off";

            if (activePlants[a] == a)
            {
                activePlants[a] = 0;
                for (auto primeDivider : factorsPlants[a])
                {
                    activePlants[primeDivider] = 0;
                }

                res = "Success";
            }
            cout << res;
        }

        cout << '\n';
    }
}
