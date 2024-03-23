#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, ans = 0;
    cin >> n >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (s - i - j >= 0 && s - i - j <= n)
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}