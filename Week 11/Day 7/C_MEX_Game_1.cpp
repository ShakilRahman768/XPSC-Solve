#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        ll mx = 0, mx2 = 0, f = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                mx = i;
                break;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 1)
            {
                f = i;
                break;
            }
        }
        for (int i = f + 1; i <= n; i++)
        {
            if (mp[i] <= 1)
            {
                mx2 = i;
                break;
            }
        }
        mx = min(mx, mx2);
        cout << mx << "\n";
    }
    return 0;
}