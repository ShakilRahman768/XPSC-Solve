#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> vrr(10, vector<int>(100, 0));
    for (auto s : v)
    {
        ll sum = 0;
        for (auto j : s)
        {
            sum += (j - '0');
        }
        vrr[s.size()][sum]++;
    }
    ll ans = 0;
    for (auto s : v)
    {
        ll l = s.size();
        ll sum = 0;
        for (auto i : s)
        {
            sum += (i - '0');
        }
        ans += vrr[l][sum];
        ll k1 = 0, k2 = l - 1;
        ll sum1 = sum;
        ll sum2 = sum;
        for (int i = 2 * l - 2; i >= 2; i -= 2)
        {
            ll rq = i - l;
            sum1 -= 2 * (s[k1] - '0');
            sum2 -= 2 * (s[k2] - '0');
            k1++;
            k2--;
            if (sum1 >= 0 && rq >= 0)
            {
                ans += vrr[rq][sum1];
            }
            if (sum2 >= 0 && rq >= 0)
            {
                ans += vrr[rq][sum2];
            }
        }
    }
    cout << ans << "\n";
    return 0;
}