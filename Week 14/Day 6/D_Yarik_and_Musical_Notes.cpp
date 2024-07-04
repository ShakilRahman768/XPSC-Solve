#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
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
        ll ans = 0;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ans += mp[v[i]];
            if (v[i] == 1)
            {
                ans += mp[2];
            }
            else if (v[i] == 2)
            {
                ans += mp[1];
            }
            mp[v[i]]++;
        }
        cout << ans << "\n";
    }
    return 0;
}