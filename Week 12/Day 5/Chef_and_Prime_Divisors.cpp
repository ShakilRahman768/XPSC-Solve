#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll check(ll m, ll n)
{
    if (m < n)
    {
        ll tmp;
        tmp = m;
        m = n;
        n = tmp;
    }
    ll r;
    while (n)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll flag = 1;
        ll g = check(a, b);
        while (b != 1)
        {
            if (g == 1)
            {
                flag = 0;
                break;
            }
            b = b / g;
            g = check(b, g);
            flag = 1;
        }
        if (flag == 1)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    return 0;
}