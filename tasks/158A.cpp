#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <set>

using namespace std;

/* Test comment,
* abc */

int main()
{
    int n, k;
    cin >> n >> k;
    k = n - k + 1;

    vector<int> numbers;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    reverse(begin(numbers), end(numbers));
    int numberK = numbers[k - 1];

    vector<int>::iterator iter;
    if (numberK <= 0)
    {
        iter = lower_bound(begin(numbers), end(numbers), 1);
    }
    else
    {
        iter = lower_bound(begin(numbers), end(numbers), numberK);
    }

    cout << numbers.end() - iter;
}
