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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = arr[n - 1] - arr[0];

        // fixing first index
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, arr[i] - arr[0]);
        }

        // fixing last index
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, arr[n - 1] - arr[i]);
        }

        // checking for adj index
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, arr[i] - arr[i + 1]);
        }

        cout << ans << endl;
    }
}
