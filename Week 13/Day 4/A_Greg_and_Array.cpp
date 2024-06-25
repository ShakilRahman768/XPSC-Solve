#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100001], b[100001], c[100001], d[100001], l[100001], r[100001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    ll x, y;
    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        b[x]++, b[y + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        b[i] += b[i - 1];
        c[l[i]] += b[i] * d[i];
        c[r[i] + 1] -= b[i] * d[i];
    }
    for (int i = 1; i <= n; i++)
    {
        c[i] += c[i - 1];
        cout << c[i] + a[i] << " ";
    }
    return 0;
}