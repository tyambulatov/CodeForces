#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    bool hasAnswear = true;

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num6 = 0;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        if (num == 5 || num == 7)
        {
            hasAnswear = false;
        }
        else if (num == 1)
        {
            num1++;
        }
        else if (num == 2)
        {
            num2++;
        }
        else if (num == 3)
        {
            num3++;
        }
        else if (num == 4)
        {
            num4++;
        }
        else if (num == 6)
        {
            num6++;
        }
    }

    if (!hasAnswear)
    {
        cout << -1;
        return 0;
    }

    if (num1 != num2 + num3 || num1 != num4 + num6)
    {
        cout << -1;
        return 0;
    }
    else
    {
        if (num6 < num3)
        {
            cout << -1;
            return 0;
        }
        else
        {
            num6 -= num3;
            for (int i = 0; i < num3; ++i)
            {
                cout << 1 << " " << 3 << " " << 6 << '\n';
            }

            if (num2 < num4)
            {
                cout << -1;
                return 0;
            }
            else
            {
                num2 -= num4;
                for (int i = 0; i < num4; ++i)
                {
                    cout << 1 << " " << 2 << " " << 4 << '\n';
                }

                if (num2 != num6)
                {
                    cout << -1;
                    return 0;
                }
                else
                {
                    for (int i = 0; i < num2; ++i)
                    {
                        cout << 1 << " " << 2 << " " << 6 << '\n';
                    }
                }
            }
        }
    }
}
