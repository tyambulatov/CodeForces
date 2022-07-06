#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int& num : nums)
        {
            cin >> num;
        }

        sort(nums.begin(), nums.end());

        if (nums[n - 1] <= 0)
        {
            cout << nums[n - 1] * nums[n - 2] * nums[n - 3] * nums[n - 4] * nums[n - 5] << '\n';
        }
        else
        {
            sort(nums.begin(), nums.end(), [](int a, int b)
                 { return abs(a) > abs(b); });

            int64_t product = nums[0] * nums[1] * nums[2] * nums[3] * nums[4];

            if (product >= 0)
            {
                cout << product << '\n';
            }
            else
            {
                        }
        }
    }
}
