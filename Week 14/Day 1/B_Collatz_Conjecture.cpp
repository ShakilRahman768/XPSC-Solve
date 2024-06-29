#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, mn, ans;
        cin >> x >> y >> k;
        while (k && x > 1)
        {
            mn = min(k, y - (x % y));
            k -= mn;
            x += mn;
            while (!(x % y))
            {
                x /= y;
            }
        }
        ans = x + k % (y - 1);
        cout << ans << "\n";
    }
}