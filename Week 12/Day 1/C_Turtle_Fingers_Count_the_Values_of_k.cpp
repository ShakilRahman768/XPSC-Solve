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
        int a, b, l;
        cin >> a >> b >> l;
        map<int, int> mp;
        long long int ans = 0, n = 1;
        while (n <= l)
        {
            int m = 1;
            while (l % (n * m) == 0)
            {
                int k = l / (n * m);
                if (mp[k] == 0)
                {
                    ans++;
                }
                mp[k] = 1;
                m *= b;
            }
            n *= a;
        }
        cout << ans << '\n';
    }
    return 0;
}