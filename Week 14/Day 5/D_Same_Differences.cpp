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
        int n, x;
        cin >> n;
        map<int, int> mp;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans += mp[x - i]++;
        }
        cout << ans << "\n";
    }
}