#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h, en, sum = 0;
        cin >> n >> m >> h;
        ll arr[n];
        ll brr[m];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n, greater<int>());
        sort(brr, brr + m, greater<int>());
        n = min(n, m);
        for (ll i = 0; i < n; i++)
        {
            en = brr[i] * h;
            sum = sum + min(arr[i], en);
        }
        cout << sum << "\n";
    }
    return 0;
}