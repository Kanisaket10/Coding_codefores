#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);

        unordered_map<long long, long long> mp;

        long long high_freq = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;

            high_freq = max(high_freq, mp[arr[i]]);
        }

        long long ops = 0;

        while (high_freq < n)
        {
            ops++;

            if (high_freq * 2 < n)
            {
                ops += high_freq;
                high_freq *= 2;
            }
            else
            {
                ops += n - high_freq;
                high_freq = n;
            }
        }

        cout << ops << endl;
    }
}
