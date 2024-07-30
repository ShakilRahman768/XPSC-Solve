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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (k >= 3)
        {
            cout << 0 << "\n";
            continue;
        }
        sort(v.begin(), v.end());
        ll ans = v[0];
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, v[i + 1] - v[i]);
        }
        if (k == 1)
        {
            cout << ans << "\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ll a = v[i] - v[j];
                ll p = lower_bound(v.begin(), v.end(), a) - v.begin();
                if (p < n)
                {
                    ans = min(ans, v[p] - a);
                }
                if (p > 0)
                {
                    ans = min(ans, a - v[p - 1]);
                }
            }
        }
        cout << ans << "\n";
    }
}