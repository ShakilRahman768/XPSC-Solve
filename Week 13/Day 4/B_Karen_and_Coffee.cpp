#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(200001, 0);
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        v[l] += 1;
        v[r + 1] -= 1;
    }
    for (int i = 1; i < 200001; i++)
    {
        v[i] += v[i - 1];
    }
    for (int i = 0; i < 200001; i++)
    {
        if (v[i] >= k)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }
    for (int i = 1; i < 200001; i++)
    {
        v[i] += v[i - 1];
    }
    for (ll i = 0; i < q; ++i)
    {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << "\n";
    }
    return 0;
}