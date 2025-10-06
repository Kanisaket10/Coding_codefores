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
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        s += s;

        int res = 0;
        int cnt = 0;

        int ind = -1;
        for (int i = 2 * n - 1; i >= 0; i--)
        {

            if (s[i] == c)
            {
                if (ind == -1)
                    continue;
                res = max(res, ind - i);
            }

            if (s[i] == 'g')
            {
                ind = i;
            }
        }

        cout << res << endl;
    }
}
