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
        ll n, val, sum = 0;
        vector<pair<ll, ll>> arr;
        vector<pair<ll, ll>> brr;
        vector<pair<ll, ll>> crr;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> val;
            arr.push_back({val, i});
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> val;
            brr.push_back({val, i});
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> val;
            crr.push_back({val, i});
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        sort(crr.begin(), crr.end());
        for (ll i = n - 1; i >= n - 3; i--)
        {
            for (ll j = n - 1; j >= n - 3; j--)
            {
                for (ll k = n - 1; k >= n - 3; k--)
                {
                    if (arr[i].second != brr[j].second && arr[i].second != crr[k].second && brr[j].second != crr[k].second)
                    {
                        sum = max(sum, (arr[i].first + brr[j].first + crr[k].first));
                        break;
                    }
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}