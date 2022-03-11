
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int64_t maxSum = 0;
        int prevNum;
        bool positiveInterval = true;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;

            if (i == 0)
            {
                if (num < 0)
                {
                    positiveInterval = false;
                }
                // maxSum += num;
                prevNum = num;
                continue;
            }

            if (num > 0)
            {
                if (positiveInterval)
                {
                    prevNum = max(prevNum, num);
                }
                else
                {
                    positiveInterval = true;
                    maxSum += prevNum;
                    prevNum = num;
                }
            }
            else
            {
                if (positiveInterval == false)
                {
                    prevNum = max(prevNum, num);
                }
                else
                {
                    positiveInterval = false;
                    maxSum += prevNum;
                    prevNum = num;
                }
            }
        }

        maxSum += prevNum;

        cout << maxSum << '\n';
    }
}
