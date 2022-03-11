
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

string TryDivide(const string& a, const string& b)
{
    int lcmAB = lcm(a.size(), b.size());
    string aTimesB = {};
    for (int i = 0; i < lcmAB / (int)a.size(); ++i)
    {
        aTimesB += a;
    }
    string bTimesA = {};
    for (int i = 0; i < lcmAB / (int)b.size(); ++i)
    {
        bTimesA += b;
    }
    if (aTimesB == bTimesA)
    {
        return aTimesB;
    }
    else
    {
        return {};
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    cin.ignore(1);

    while (t--) // O(100)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);

        string ans = TryDivide(a, b);
        if (ans.size() != 0)
        {
            cout << ans << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
}
