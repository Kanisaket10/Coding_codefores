#include <bits/stdc++.h>
using namespace std;

const int mod = 1e7;

void solve()
{
    long long num;
    cin >> num;

    if (num < 4 || num % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        long long mx = ceil((num * 1.0) / 6);
        cout << mx << " " << (num / 4) << endl;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
