#include <bits/stdc++.h>

using namespace std;

bool isTriangle(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> segments(n);
    for (int& a : segments)
    {
        cin >> a;
    }

    sort(segments.begin(), segments.end());

    string answer = "NO";
    for (int i = 0; i < n - 2; ++i)
    {
        if (isTriangle(segments[i], segments[i + 1], segments[i + 2]))
        {
            answer = "YES";
            break;
        }
    }

    cout << answer;
}
