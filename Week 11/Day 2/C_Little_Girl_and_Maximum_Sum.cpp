#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> v2(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        v2[l]++;
        v2[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        v2[i] = v2[i - 1] + v2[i];
    }
    sort(v.rbegin(), v.rend());
    sort(v2.rbegin(), v2.rend());
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * v2[i] * v[i]);
    }
    cout << ans << '\n';
    return 0;
}