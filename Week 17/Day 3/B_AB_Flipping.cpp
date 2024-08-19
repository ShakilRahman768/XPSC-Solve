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
        int n;
        string s;
        cin >> n >> s;
        int a = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                a += 1;
            }
            else
            {
                ans += a;
                a = min(1, a);
            }
        }
        cout << ans << "\n";
    }
}