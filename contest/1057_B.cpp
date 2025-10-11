#include <bits/stdc++.h>
using namespace std;

bool check(long long a, long long b, long long c)
{
    if ((a & b & ~c) != 0LL)
        return 1;
    return 0;
}

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        if (check(x, y, z) || check(x, z, y) || check(y, z, x))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}
