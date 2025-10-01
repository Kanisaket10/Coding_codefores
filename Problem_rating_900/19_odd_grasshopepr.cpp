#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;

        long long ans = 0;

        if (n % 4 == 0)
            ans = 0;
        else if (n % 4 == 1)
            ans = -n;
        else if (n % 4 == 2)
            ans = 1;
        else if (n % 4 == 3)
            ans = n + 1;

        if (x % 2 == 0)
            ans = x + ans;
        else
            ans = x - ans;

        cout << ans << endl;
    }
}
