#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = (arr[i] > q) ? 0 : 1;
        }

        long long cnt = 0; // cnt no. of 1s
        long long ways = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 1)
            {
                cnt++;
            }
            else
            {

                if (cnt >= k)
                {
                    long long diff = cnt - k + 1;
                    ways += (diff * (diff + 1)) / 2;
                }
                cnt = 0;
            }
        }

        if (cnt >= k)
        {
            long long diff = cnt - k + 1;
            ways += (diff * (diff + 1)) / 2;
        }

        cout << ways << endl;
    }
}
