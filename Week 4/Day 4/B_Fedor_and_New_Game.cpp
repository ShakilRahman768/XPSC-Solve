#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> v;
    vector<int> f;
    vector<int> s;
    for (int i = 0; i < m + 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int fd = v.back();
    for (int i = 0; i < n; i++)
    {
        if (fd >> i & 1)
        {
            f.push_back(1);
        }
        else
        {
            f.push_back(0);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int sl = v[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (sl >> j & 1)
            {
                s.push_back(1);
            }
            else
            {
                s.push_back(0);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (f[j] != s[j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
        s.clear();
    }
    cout << ans << "\n";
    return 0;
}