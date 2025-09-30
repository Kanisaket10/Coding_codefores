#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size(); // 9
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }

        if ((cnt0 <= cnt1 && cnt0 % 2 == 1) || (cnt0 >= cnt1 && cnt1 % 2 == 1))
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
}
