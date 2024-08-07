#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c, d;
        cin >> n >> c >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int l = 0, r = d + 1;
        while (l < r)
        {
            int m = (r + l + 1) / 2;
            long long int ans = 0;
            for (int i = 0; i < d; i++)
            {
                if (i % m < n)
                {
                    ans += arr[i % m];
                }
            }
            if (ans >= c)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
        }
        if (l == 0)
        {
            cout << "Impossible" << "\n";
        }
        else if (l == d + 1)
        {
            cout << "Infinity" << "\n";
        }
        else
        {
            cout << l - 1 << "\n";
        }
    }
    return 0;
}