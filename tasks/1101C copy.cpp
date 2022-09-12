#include <bits/stdc++.h>

using namespace std;

struct Segment
{
    int start;
    int end;
    int position;
};

int n;
vector<Segment> segments;

inline bool read()
{

    cin >> n;

    segments.resize(n);

    for (int i = 0; i < n; ++i)
    {
        Segment segment;
        cin >> segment.start >> segment.end;
        segment.position = i;
        segments[i] = segment;
    }
    return true;
}

bool compare(const Segment& lhs, const Segment& rhs)
{
    if (lhs.end != rhs.end)
    {
        return lhs.end < rhs.end;
    }
    if (lhs.start != rhs.start)
    {
        return lhs.start < rhs.start;
    }
    return lhs.position < rhs.position;
}

inline void solve()
{
    sort(segments.begin(), segments.end(), compare);
    int mnL = segments[n - 1].start;

    for (int i = n - 2; i >= 0; --i)
    {
        if (segments[i].end < mnL)
        {
            vector<int> output(n, 2);
            for (int j = 0; j <= i; j++)
            {
                output[segments[j].position] = 1;
            }

            for (auto a : output)
            {
                cout << a << " ";
            }
            cout << '\n';
            return;
        }
        mnL = min(segments[i].start, mnL);
    }
    cout << -1 << '\n';
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {

        assert(read());
        solve();
    }
}