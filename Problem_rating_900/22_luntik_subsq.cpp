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

        vector<long long> arr(n);

        int zeroes = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeroes++;
            else if (arr[i] == 1)
                ones++;
        }

        long long ans = pow(2, zeroes) * ones;

        cout << ans << endl;
    }
}
