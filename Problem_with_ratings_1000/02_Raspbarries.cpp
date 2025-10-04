#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = INT_MAX;
        int cnt_even = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
                cnt_even++;

            if (arr[i] % k == 0)
                res = 0;
            res = min(res, k - (arr[i] % k));
        }

        if (k == 4)
        {
            if (cnt_even >= 2)
                res = min(res, 0);
            else if (cnt_even == 1)
                res = min(res, 1);
            else if (cnt_even == 0)
                res = min(res, 2);
        }

        cout << res << endl;
    }
}