#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{

    if (n > 1)
        return 1;
    return 0;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}