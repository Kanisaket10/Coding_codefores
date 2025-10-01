#include <bits/stdc++.h>
using namespace std;

string d[4] = {"00", "25", "50", "75"};

int min_operations(string &num, string to_check)
{

    int ind = to_check.size() - 1;
    int ops = 0;

    for (int i = num.size() - 1; i >= 0; i--)
    {

        if (num[i] == to_check[ind])
        {
            ind--;

            if (ind < 0)
                break;
        }
        else
            ops++;
    }

    if (ind >= 0)
        ops = INT_MAX;

    return ops;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;

        int ans = INT_MAX;

        for (auto possible_val : d)
        {
            ans = min(ans, min_operations(num, possible_val));
        }

        std::cout << ans << std::endl;
    }
}
