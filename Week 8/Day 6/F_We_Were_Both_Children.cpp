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
        int n, x, mx = INT_MIN;
        cin >> n;
        vector<int> v(n + 1, 0);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= n)
            {
                mp[x]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] != 0)
            {
                for (int j = i; j <= n; j += i)
                {
                    v[j] += mp[i];
                }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > mx)
            {
                mx = v[i];
            }
        }
        cout << mx << "\n";
    }
    return 0;
}