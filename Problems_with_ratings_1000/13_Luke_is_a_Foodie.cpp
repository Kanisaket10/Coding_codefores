#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<pair<long long, long long>> segments(n);

        for (int i = 0; i < n; i++)
        {
            segments[i] = {arr[i] - x, arr[i] + x};
        }

        long long l = segments[0].first;
        long long r = segments[0].second;

        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            l = max(l, segments[i].first);
            r = min(r, segments[i].second);

            if (l > r)
            {
                ans++;
                l = segments[i].first;
                r = segments[i].second;
            }
        }

        cout << ans << endl;
    }
}
