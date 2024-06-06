#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<ll, ll> mp;
    ll start = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp.insert({arr[i], i});
        }
        else
        {
            if (mp[arr[i]] >= start)
            {
                start = mp[arr[i]] + 1;
            }
            mp[arr[i]] = i;
        }
        ans = max(ans, i - start + 1);
    }
    cout << ans << "\n";
}