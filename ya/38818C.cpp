#include <bits/stdc++.h>

using namespace std;

vector<int64_t> primal(int64_t n)
{
    vector<int64_t> stPr;
    stPr.push_back(1);
    vector<int> mass(n + 1, 1);
    for (int i = 2; i < n + 1; i++)
    {
        if (mass[i] == 1)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                mass[j] = 0;
            }
            stPr.push_back(i);
        }
    }
    return stPr;
}

set<int64_t> getPrimeSet(int64_t num, const set<int64_t>& primal)
{
    set<int64_t> stPr = {1};
    for (int64_t i = 1; i * i <= num; i++)
    {

        if (num % i == 0)
        {
            if (primal.count(i) == 1)
            {
                stPr.insert(i);
            }

            bool secondIsPrimal = true;
            int64_t secondNum = num / i;
            for (int j = 2; j <= sqrt(secondNum); j++)
            {
                if (secondNum % j == 0)
                {
                    secondIsPrimal = false;
                    break;
                }
            }

            if (secondIsPrimal)
            {
                stPr.insert(secondNum);
            }
        }
    }
    return stPr;
}

map<int64_t, int> getMapFromSet(int64_t num, const set<int64_t>& setNums)
{
    map<int64_t, int> result;
    for (auto it = setNums.begin(); it != setNums.end(); it++)
    {
        if (*it == 1)
        {
            result[1] = 1;
            continue;
        }

        int64_t tmpNum = num;
        while (tmpNum % *it == 0)
        {
            tmpNum /= *it;
            result[*it]++;
        }
    }
    return result;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    vector<int64_t> primeNumbers = primal(pow(10, 6));

    set<int64_t> setPrime;
    for (auto a : primeNumbers)
    {
        setPrime.insert(a);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int64_t A, B;
        cin >> A >> B;

        set<int64_t> setA = getPrimeSet(A, setPrime);
        set<int64_t> setB = getPrimeSet(B, setPrime);

        map<int64_t, int> mapA = getMapFromSet(A, setA);
        map<int64_t, int> mapB = getMapFromSet(B, setB);

        auto itA = mapA.rbegin();
        auto itB = mapB.rbegin();

        while (itA != mapA.rend() || itB != mapB.rend())
        {
            auto pairA = *itA;
            auto pairB = *itB;

            if (pairA.first > pairB.first)
            {
                B *= pairA.first;
                break;
            }
            else if (pairA.first < pairB.first)
            {
                A *= pairB.first;
                break;
            }
            else
            {
                // простые числа равны, но степени
                if (pairA.second > pairB.second)
                {
                    B *= pairA.first;
                    break;
                }
                else if (pairA.second < pairB.second)
                {
                    A *= pairB.first;
                    break;
                }
            }

            itA++;
            itB++;
        }

        cout << __gcd(A, B) << '\n';
    }
}

/*
1
2093054  9369319
*/