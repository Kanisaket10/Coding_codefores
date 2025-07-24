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
        cin >> n;
        vector<int> num(n);
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        bool found = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (num[i] > num[i - 1] && num[i] > num[i + 1])
            {
                cout << "YES\n";
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                found = 1;
                break;
            }
        }
        if (!found)
            cout << "NO\n";
    }
}
