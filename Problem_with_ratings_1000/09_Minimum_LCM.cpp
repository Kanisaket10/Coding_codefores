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

        long long a = 1;
        long long b = n - 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                b = n - a;
                break;
            }
        }
        cout << a << " " << b << endl;
    }
}
