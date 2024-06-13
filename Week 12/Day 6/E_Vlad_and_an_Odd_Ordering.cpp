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
        ll n, k;
        cin >> n >> k;
        ll c = 0, ans = 1;
        while (k > 0)
        {
            c = (n + 1) / 2;
            if (c >= k)
            {
                break;
            }
            k -= c;
            ans = ans * 2;
            n = n / 2;
        }
        ll m = (2 * k) - 1;
        cout << ans * m << "\n";
    }
    return 0;
}