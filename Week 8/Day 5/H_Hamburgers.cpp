#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check(ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll c[], ll r, ll mid)
{
    ll br = c[0] * mid;
    ll sr = c[1] * mid;
    ll cr = c[2] * mid;
    ll zero = 0;
    ll db = max(br - nb, zero);
    ll ds = max(sr - ns, zero);
    ll dc = max(cr - nc, zero);
    if ((db * pb + dc * pc + ds * ps) > r)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    ll nb, ns, nc, pb, ps, pc, rs;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> rs;
    ll ln = s.length();
    ll c[3] = {0};
    for (int i = 0; i < ln; i++)
    {
        if (s[i] == 'B')
        {
            c[0]++;
        }
        else if (s[i] == 'S')
        {
            c[1]++;
        }
        else
        {
            c[2]++;
        }
    }
    ll l = 0, r = 1e13;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (check(nb, ns, nc, pb, ps, pc, c, rs, mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";
}