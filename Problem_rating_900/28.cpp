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
        vector<long long> num(n * k);

        for (int i = 0; i < n * k; i++)
        {
            cin >> num[i];
        }

        long long sum = 0;
        long long pointer = n * k;

        while (k--)
        {
            pointer -= ((n / 2) + 1);
            sum += num[pointer];
        }

        cout << sum << endl;
    }
}
