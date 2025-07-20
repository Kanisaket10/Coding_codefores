#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // 3 6 5
    }

    long long cnt = 0;

    for (int i = n - 2; i >= 0; i--)
    {

        while (a[i] >= a[i + 1])
        {
            cnt++;
            a[i] /= 2;
            if (a[i] == 0)
                break;
        }

        if (a[i] == 0 && a[i + 1] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << cnt << endl;
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
