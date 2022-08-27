#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int64_t x, y;
    cin >> x >> y;

    int64_t counter = 0;
    if (x == y)
    {
        counter = 1;
    }
    else if (y / x <= 0 || x > y)
    {
        counter = 0;
    }
    else
    {
        int64_t num = y / x;
        for (int i = 1; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                int64_t z1 = i;
                int64_t z2 = num / i;
                int64_t a = z1 * x;
                int64_t b = z2 * x;
                if (y % a == 0 && y % b == 0)
                {
                    if (z1 > 1 && z1 % z2 != 0 && z2 % z1 != 0)
                    {
                        counter++;
                    }
                    else if (z1 == 1)
                    {
                        counter++;
                    }
                }
            }
        }
        counter *= 2;
    }
    cout << counter;
}
