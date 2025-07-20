#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> a(n);

    long long cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            cnt++;
    }

    bool found_zero = 0;
    int l = 0, r = n - 1;

    while (a[l] == 0)
        l++;
    while (a[r] == 0)
        r--;

    for (long long i = l; i <= r; i++)
    {
        if (a[i] == 0)
        {
            found_zero = 1;
            break;
        }
    }

    if (cnt == n)
        cout << 0 << endl;
    else if (found_zero == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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
