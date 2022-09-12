#include <bits/stdc++.h>

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

            for (int j = i * i; j <= n; j += i)
            { //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    return primes;
}

vector<bool> compute_primesV(int n)
{
    vector<bool> sieve(n + 1, true);

    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        { //если i не вычеркнуто

            for (int j = i * i; j <= n; j += i)
            { //вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

void spf(int n)
{

    int spf[n + 1];

    spf[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        spf[i] = i;
    }

    for (int i = 4; i <= n; i += 2)
    {
        spf[i] = 2;
    }

    for (int i = 3; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

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

    cout << "Prime numbers: ";
    for (int i : compute_primes(sqrt(1000'000'000)))
    {
        cout << i << ", ";
    }
}