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
        int n, a, ans = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == ans)
            {
                ans++;
            }
            if (i < n - 1)
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}