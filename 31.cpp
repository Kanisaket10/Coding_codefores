#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;

        long long n = num;

        if (n == 1)
            cout << 0 << endl;

        else
        {
            long long cnt3 = 0, cnt2 = 0;
            while (n % 3 == 0)
            {
                cnt3++;
                n /= 3;
            }
            while (n % 2 == 0)
            {
                cnt2++;
                n /= 2;
            }

            if (cnt3 >= cnt2 && n == 1)
                cout << cnt2 + 2 * (cnt3 - cnt2) << endl;
            else
                cout << -1 << endl;
        }
    }
}
