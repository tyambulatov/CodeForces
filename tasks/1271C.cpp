#include <bits/stdc++.h>

using namespace std;

struct Directions
{
    int right = 0;
    int down = 0;
    int left = 0;
    int up = 0;
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n, sx, sy;
    cin >> n >> sx >> sy;

    Directions directions;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (min(x, sx) <= sx && sx <= max(x, sx) &&
            min(y, sy) <= sy + 1 && sy + 1 <= max(y, sy))
        {
            directions.right++;
        }

        if (min(x, sx) <= sx + 1 && sx + 1 <= max(x, sx) &&
            min(y, sy) <= sy && sy <= max(y, sy))
        {
            directions.down++;
        }

        if (min(x, sx) <= sx && sx <= max(x, sx) &&
            min(y, sy) <= sy - 1 && sy - 1 <= max(y, sy))
        {
            directions.left++;
        }

        if (min(x, sx) <= sx - 1 && sx - 1 <= max(x, sx) &&
            min(y, sy) <= sy && sy <= max(y, sy))
        {
            directions.up++;
        }
    }

    if (directions.right >= directions.down &&
        directions.right >= directions.left &&
        directions.right >= directions.up)
    {
        cout << directions.right << '\n';
        cout << sx << " " << sy + 1;
    }
    else if (directions.down >= directions.right &&
             directions.down >= directions.left &&
             directions.down >= directions.up)
    {
        cout << directions.down << '\n';
        cout << sx + 1 << " " << sy;
    }
    else if (directions.left >= directions.right &&
             directions.left >= directions.down &&
             directions.left >= directions.up)
    {
        cout << directions.left << '\n';
        cout << sx << " " << sy - 1;
    }
    else
    {
        cout << directions.up << '\n';
        cout << sx - 1 << " " << sy;
    }
}