#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, mx = INT_MIN;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum = sum + arr[r];
        if (sum <= m)
        {
            r++;
            ans++;
        }
        else
        {
            sum = sum - arr[l];
            l++;
            r++;
        }
    }
    cout << ans << "\n";
    return 0;
}