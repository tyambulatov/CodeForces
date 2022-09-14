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

bool isPrime(int n)
{
    for (int64_t i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << '\n'
             << n << '\n';
    }
    else if (isPrime(n - 2))
    {
        cout << 2 << '\n'
             << 2 << " " << n - 2 << '\n';
    }
    else if (isPrime(n - 4))
    {
        cout << 3 << '\n'
             << "2 2 " << n - 4 << '\n';
    }
    else
    {
        // three odd numbers;
        int num1 = n - 6;
        for (; num1 > 3; num1 -= 2)
        {
            if (isPrime(num1))
            {
                break;
            }
        }
        int sumTwoNum = n - num1;
        vector<int> primes = compute_primes(sumTwoNum);

        int num2 = 3;
        int num3 = 3;
        for (auto a : primes)
        {
            if (isPrime(sumTwoNum - a))
            {
                num2 = a;
                num3 = sumTwoNum - a;
                break;
            }
        }
        cout << 3 << '\n'
             << num1 << " " << num2 << " " << num3 << '\n';
    }
}
