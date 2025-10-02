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
        int n = s.size();
        string t = "";
        int zeros = 0, ones = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }

        if (zeros == s.size() || ones == s.size())
        {
            cout << s.size() << endl;
        }
        else if (zeros == ones)
        {
            cout << 0 << endl;
        }
        else
        {
            int len_t = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1' && zeros > 0)
                {
                    len_t++;
                    zeros--;
                }
                else if (s[i] == '0' && ones > 0)
                {
                    len_t++;
                    ones--;
                }
                else
                    break;
            }

            cout << n - len_t << endl;
        }
    }
}
