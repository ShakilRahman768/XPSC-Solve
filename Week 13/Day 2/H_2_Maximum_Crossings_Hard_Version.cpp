#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        pbds<ll> p;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            p.insert(x);
            ans += p.size() - p.order_of_key(x) - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}