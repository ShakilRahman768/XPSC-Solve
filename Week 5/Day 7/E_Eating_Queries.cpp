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
        ll n, q, sum = 0;
        cin >> n >> q;
        int arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
            arr[i] = sum;
        }
        while (q--)
        {
            ll rs;
            cin >> rs;
            ll ans = -1;
            ll l = 0, r = n - 1;
            while (r >= l)
            {
                ll mid = l + (r - l) / 2;
                if (arr[mid] >= rs)
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}