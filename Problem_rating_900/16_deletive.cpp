#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> mp;

    for (int i = 0; i < t.size(); i++)
    {
        mp[t[i]]++;
    }

    string ans = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (mp.find(s[i]) != mp.end() && mp[s[i]] != 0)
        {
            mp[s[i]]--;
            ans += s[i];
        }
    }

    reverse(ans.begin(), ans.end());

    if (ans == t)
        cout << "YES\n";
    else
        cout << "NO\n";
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
