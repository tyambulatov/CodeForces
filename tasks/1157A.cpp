#include <bits/stdc++.h>

using namespace std;

void Function(int& num)
{
    num++;
    while (num % 10 == 0)
    {
        num /= 10;
    }
}

int main()
{
    int num;
    cin >> num;

    set<int> uniqueNums;

    do
    {
        uniqueNums.insert(num);
        Function(num);

    } while (uniqueNums.find(num) == uniqueNums.end());

    cout << uniqueNums.size();
}
