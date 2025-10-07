#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long mini_s = k * b;
        long long max_s = (k * b) + (k - 1) * n;

        if (mini_s > s || max_s < s)
            cout << -1 << endl;
        else
        {

            vector<long long> arr(n, 0);
            arr[0] = mini_s;
            s -= mini_s;

            for (int i = 0; i < n; i++)
            {
                long long add = min(k - 1, s);
                arr[i] += add;
                s -= add;
            }

            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
