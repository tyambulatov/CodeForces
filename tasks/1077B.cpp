#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int& num : nums)
    {
        cin >> num;
    }

    int changes = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (nums[i] == 1 && nums[i + 1] == 0 && nums[i + 2] == 1)
        {
            nums[i + 2] = 0;
            changes++;
        }
    }

    cout << changes;
}
