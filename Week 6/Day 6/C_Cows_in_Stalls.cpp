#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n, k;
vector<ll> v;
int check(ll x)
{
    int flag = 1;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && v[i] + x > v[j])
        {
            j++;
        }
        if (j == n)
        {
            break;
        }
        cnt++;
        i = j - 1;
    }
    return cnt >= k;
}
int main()
{
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = v[n - 1] - v[0] + 10;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}