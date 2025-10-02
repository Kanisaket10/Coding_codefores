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
        {
            cin >> arr[i];
        }

        long long mini = 0, maxi = 0;

        for (int i = 0; i < n; i++)
        {
            mini += arr[i];
            maxi += ceil((arr[i] * 1.0) / x);
        }

        mini = ceil((mini * 1.0) / x);

        cout << mini << " " << maxi << endl;
    }
}
