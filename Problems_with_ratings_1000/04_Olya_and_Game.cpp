#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;

        vector<long long> second;
        long long min_first = LLONG_MAX;

        for (int i = 0; i < N; i++)
        {

            long long n;
            cin >> n;

            vector<long long> arr(n);

            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            sort(arr.begin(), arr.end());

            min_first = min(min_first, arr[0]);

            second.push_back(arr[1]);
        }

        sort(second.begin(), second.end());

        long long total = accumulate(second.begin(), second.end(), 0LL);
        total += min(second[0], min_first) - second[0];

        cout << total << endl;
    }
}
