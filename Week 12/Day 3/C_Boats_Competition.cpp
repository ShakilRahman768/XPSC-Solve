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
        int n, flag = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << 0 << "\n";
            flag = 0;
        }
        if (flag == 1)
        {
            sort(v.begin(), v.end());
            int mx = v[n - 1] + v[n - 2];
            int mn = v[0] + v[1];
            int ans = 0;
            for (int i = mn; i <= mx; i++)
            {
                int cnt = 0, l = 0, r = n - 1;
                while (l < r)
                {
                    if (v[l] + v[r] == i)
                    {
                        cnt++;
                        l++;
                        r--;
                    }
                    else if (v[l] + v[r] < i)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
                ans = max(ans, cnt);
            }
            cout << ans << "\n";
        }
    }
    return 0;
}