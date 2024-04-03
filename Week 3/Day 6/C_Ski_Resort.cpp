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
        ll n, k, q, cnt = 0, sum = 0;
        cin >> n >> k >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                cnt++;
            }
            else if (cnt >= k)
            {
                cnt = cnt - k + 1;
                sum = sum + (cnt * (cnt + 1)) / 2;
                cnt = 0;
            }
            else
            {
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            cnt = cnt - k + 1;
            sum = sum + (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
        cout << sum << "\n";
    }
    return 0;
}