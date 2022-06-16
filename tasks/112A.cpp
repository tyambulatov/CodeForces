#include <bits/stdc++.h>

using namespace std;

void ToLowerConverter(string& str)
{
    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char c)
              { return std::tolower(c); });
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    ToLowerConverter(s1);
    ToLowerConverter(s2);

    if (s1 < s2)
    {
        cout << -1;
    }
    else if (s1 == s2)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}
