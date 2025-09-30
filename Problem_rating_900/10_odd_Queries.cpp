#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    while (q--)
    {
        long long l, r, k;
        cin >> l >> r >> k;

        long long sum = prefix[n] - (prefix[r] - prefix[l - 1]);
        sum += (r - l + 1) * k;

        if (sum % 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
