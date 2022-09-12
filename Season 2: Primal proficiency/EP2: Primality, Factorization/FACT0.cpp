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
    vector<bool> sieve(n + 1, true);
    vector<int> primes;

    for (int64_t i = 2; i <= n; i++)
    {
        if (sieve[i])
        { //если i не вычеркнуто
            primes.push_back(i);

            for (int64_t j = i * i; j <= n; j += i)
            { //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    return primes;
}

map<int64_t, int> factorize(int64_t a, const vector<int>& primes)
{
    map<int64_t, int> factors;

    for (int i = 0; primes[i] <= sqrt(a); i++)
    {
        while (primes[i] != 0 && a % primes[i] == 0)
        {
            factors[primes[i]]++;
            a /= primes[i];
        }
    }

    if (a != 1)
    {
        factors[a]++;
    }

    return factors;
}

void OutputFactor(int64_t n, const vector<int>& primes)
{
    map<int64_t, int> res = factorize(n, primes);

    for (auto a : res)
    {
        if (a != *res.begin())
        {
            cout << " ";
        }
        cout << a.first << '^' << a.second;
    }
    cout << '\n';
}

int main()
{

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    vector<int> primes = compute_primes(100'000'000);

    int64_t n;
    do
    {
        cin >> n;
        if (n != 0)
        {
            OutputFactor(n, primes);
        }
    } while (n != 0);
}
