
#include <bits/stdc++.h>

using namespace std;

bool HaveIntersections(vector<int> a, vector<int> b)
{
    set<int> setA;
    set<int> setB(b.begin(), b.end());
    for (auto num : a)
    {
        setA.insert(num - 1);
        setA.insert(num + 1);
    }
    vector<int> unionAB;
    set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), back_inserter(unionAB));
    if (unionAB.size() != setA.size() + setB.size())
        return true;

    return false;
}

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

        vector<int> odd;
        vector<int> even;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;

            if (num % 2 == 0)
            {
                even.push_back(num);
            }
            else
            {
                odd.push_back(num);
            }
        }

        string ans = "NO\n";
        if (even.size() % 2 == 0)
        {
            ans = "YES\n";
        }
        else
        {
            if (even.size() < odd.size())
            {
                if (HaveIntersections(even, odd))
                {
                    ans = "YES\n";
                }
            }
            else
            {
                if (HaveIntersections(odd, even))
                {
                    ans = "YES\n";
                }
            }
        }
        cout << ans;
    }
}
