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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        if (v[0] > 0)
        {
            ans = v[0];
        }
        if (n - 1 > 0)
        {
            ans = max(ans, v[0] + v[1]);
        }
        for (int i = n - 1; i > 1; i--)
        {
            if (v[i] > 0)
            {
                ans += v[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}