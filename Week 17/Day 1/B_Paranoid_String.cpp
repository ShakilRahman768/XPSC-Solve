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
        long long int ans = n;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans += i;
            }
        }
        cout << ans << '\n';
    }
}