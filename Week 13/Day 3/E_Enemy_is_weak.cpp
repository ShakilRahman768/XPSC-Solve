#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[1000005], brr[1000005], crr[1000005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, ans = 0;
    cin >> n;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]] = i;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        brr[m[arr[i]]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        ll a = 0, b = brr[i];
        for (int j = b; j > 0; j -= j & -j)
        {
            a += crr[j];
        }
        ans += (i - a) * (b - 1 - a);
        while (b <= n)
        {
            crr[b]++;
            b += b & -b;
        }
    }
    cout << ans << "\n";
}