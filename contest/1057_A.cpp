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

        std::vector<int> s(n);

        for (int i = 0; i < n; i++)
            cin >> s[i];

        sort(s.begin(), s.end());

        long cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}
