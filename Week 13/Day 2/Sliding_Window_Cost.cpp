#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<int> pl, pu;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (pl.find(v[i - k]) != pl.end())
            {
                pl.erase(pl.find(v[i - k]));
                sum1 = sum1 - v[i - k];
            }
            else
            {
                pu.erase(pu.find(v[i - k]));
                sum2 = sum2 - v[i - k];
            }
        }
        ll sz1 = pl.size(), sz2 = pu.size();
        if (sz1 <= sz2)
        {
            pl.insert(v[i]);
            sum1 = sum1 + v[i];
        }
        else
        {
            pu.insert(v[i]);
            sum2 = sum2 + v[i];
        }
        sz1 = pl.size(), sz2 = pu.size();
        if (sz1 > 0 && sz2 > 0)
        {
            auto mxpl = pl.rbegin();
            auto mnpu = pu.begin();
            if (*mxpl > *mnpu)
            {
                sum1 = sum1 + (*mnpu - *mxpl);
                sum2 = sum2 + (*mxpl - *mnpu);
                pl.insert(*mnpu);
                pu.insert(*mxpl);
                pl.erase(pl.find(*mxpl));
                pu.erase(pu.find(*mnpu));
            }
        }
        if (i >= (k - 1))
        {
            ll m = *pl.rbegin();
            cout << (sz1 * m - sum1) + (sum2 - m * sz2) << " ";
        }
    }
}