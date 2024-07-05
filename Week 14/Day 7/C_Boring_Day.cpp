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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll s = 0, i = 0, j = 0, ans = 0;
        while (j < n)
        {
            s += v[j];
            while (s > r)
            {
                s -= v[i];
                i++;
            }
            if (s >= l && s <= r)
            {
                s = 0;
                ans++;
                i = j + 1;
            }
            j++;
        }
        cout << ans << "\n";
    }
}