#include <bits/stdc++.h>
using namespace std;

vector<int> findmax(vector<int> &arr)
{

    int n = arr.size();
    vector<pair<int, int>> n_arr(n);

    for (int i = 0; i < n; i++)
    {
        n_arr[i].first = arr[i];
        n_arr[i].second = i;
    }

    sort(n_arr.rbegin(), n_arr.rend());

    vector<int> res(3);
    for (int i = 0; i < 3; i++)
    {
        res[i] = n_arr[i].second;
    }

    return res;
}

int main()
{
    // your code goes here

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        vector<int> n_a = findmax(a);
        vector<int> n_b = findmax(b);
        vector<int> n_c = findmax(c);

        int ans = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    int x = n_a[i], y = n_b[j], z = n_c[k];
                    if (x == y || y == z || x == z)
                        continue;
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }

        cout << ans << endl;
    }
}
