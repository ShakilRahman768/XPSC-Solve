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
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        vector<int> l(k + 1), r(k + 1);
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] > mx)
            {
                for (int j = mx + 1; j <= v[i]; j++)
                {
                    l[j] = i;
                }
                mx = v[i];
            }
        }
        mx = 0;
        for (int i = n; i >= 1; i--)
        {
            if (v[i] > mx)
            {
                for (int j = mx + 1; j <= v[i]; j++)
                {
                    r[j] = i;
                }
                mx = v[i];
            }
        }
        int ans;
        for (int i = 1; i <= k; i++)
        {
            ans = 2 * (r[i] - l[i] + 1) * mp[i];
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}