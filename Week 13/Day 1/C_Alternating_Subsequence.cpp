#include <bits/stdc++.h>
#define ll long long int
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
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll j = i;
            ll mx = LONG_MIN;
            while (j < n && v[i] * v[j] > 0)
            {
                mx = max(mx, v[j]);
                j++;
            }
            sum += mx;
            i = j - 1;
        }
        cout << sum << "\n";
    }
}