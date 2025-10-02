#include <bits/stdc++.h>
using namespace std;

long long calculate_moves(long long g, long long b)
{
    return min((b % g), (g - (b % g)));

    // decreament = b%g
    // increament = g - b%g
}

int main()
{
    // your code goes here

    long long t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << " " << 0 << endl; // Infinite excitment
        else
        {
            long long g = abs(a - b);
            long long moves;

            if (a > b)
            {
                moves = calculate_moves(g, b);
            }
            else
            {
                moves = calculate_moves(g, a);
            }

            cout << g << " " << moves << endl;
        }
    }
}
