#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        long long cnt = 0, ans = 0;
        for (auto ch : s)
        {
            mp[ch]++;

            if (mp[ch] == 1)
            {
                cnt++;
            }
            ans += cnt;
        }

        cout << ans << endl;
    }
}
