#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b;
        map<vector<int>, int> mp;
        ll ans = 0;
        for (int i = 3; i <= n; i++)
        {
            cin >> c;
            ans += mp[{a, b, 0}]++;
            ans += mp[{0, b, c}]++;
            ans += mp[{a, 0, c}]++;
            ans -= 3 * mp[{a, b, c}]++;
            a = b;
            b = c;
        }
        cout << ans << "\n";
    }
}