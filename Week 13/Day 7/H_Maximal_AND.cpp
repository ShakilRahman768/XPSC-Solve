#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 30; i >= 0; i--)
        {
            int cnt = 0;
            for (int j = 1; j <= n; j++)
            {
                if (!(a[j] & (1 << i)))
                {
                    cnt++;
                }
            }
            if (cnt <= k)
            {
                k -= cnt;
                ans |= 1 << i;
            }
        }
        cout << ans << '\n';
    }
}