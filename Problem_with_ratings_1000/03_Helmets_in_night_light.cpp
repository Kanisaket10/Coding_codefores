#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<long long, long long>> nums(n);

        for (int i = 0; i < n; i++)
        {
            nums[i] = {b[i], a[i]};
        }

        sort(nums.begin(), nums.end());

        long long min_cost = p;
        long long already_occ = 1;

        for (auto num : nums)
        {
            long long sharing_cost = num.first;
            long long can_be_shared = num.second;

            if (sharing_cost >= p)
            {
                break;
            }

            if (already_occ + can_be_shared > n)
            {
                min_cost += (n - already_occ) * sharing_cost;
                already_occ = n;
                break;
            }
            else
            {
                min_cost += can_be_shared * sharing_cost;
                already_occ += can_be_shared;
            }
        }

        min_cost += (n - already_occ) * p;

        std::cout << min_cost << std::endl;
    }
}
