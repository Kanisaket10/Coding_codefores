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

        string s;
        cin >> s;

        set<long long> st;
        vector<long long> prefix(n + 1, 0), suffix(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            st.insert(s[i - 1]);
            prefix[i] = st.size();
        }

        st.clear();

        for (int i = n; i >= 1; i--)
        {
            st.insert(s[i - 1]);
            suffix[i] = st.size();
        }

        long long max_freq = -1;
        for (int i = 0; i < n; i++)
        {
            max_freq = max(max_freq, prefix[i] + suffix[i + 1]);
        }

        cout << max_freq << endl;
    }
}
