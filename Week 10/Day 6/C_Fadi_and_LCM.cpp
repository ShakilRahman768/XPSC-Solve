#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b)
{
    ll l = a / __gcd(a, b) * b;
    return l;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, ans;
    cin >> x;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && lcm(i, x / i) == x)
        {
            ans = i;
        }
    }
    cout << ans << " " << x / ans << "\n";
}