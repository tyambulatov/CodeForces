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

        set<int> nums;
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            if (nums.count(num) == 1)
            {
                num++;
            }
            nums.insert(num);
        }

        cout << nums.size() << '\n';
    }
}
