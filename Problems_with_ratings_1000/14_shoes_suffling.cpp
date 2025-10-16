#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        map<long long, long long> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        long long flag = 0;
        for (auto num : mp)
        {

            if (num.second == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }

        long long l = 0, r = 0;

        while (r < n)
        {
            if (arr[l] == arr[r])
            {
                r++;
            }
            else
            {
                rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
                l = r;
            }
        }

        rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);

        for (auto num : ans)
        {
            cout << num << " ";
        }

        cout << endl;
    }
}
