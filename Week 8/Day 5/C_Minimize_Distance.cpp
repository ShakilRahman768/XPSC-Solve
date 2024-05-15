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
        long long int n, k, r, ans = 0;
        cin >> n >> k;
        vector<int> ps;
        vector<int> ng;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                ps.push_back(x);
            }
            else if (x < 0)
            {
                ng.push_back(-x);
            }
        }
        sort(ps.begin(), ps.end());
        sort(ng.begin(), ng.end());
        for (int i = ps.size() - 1; i >= 0; i = i - k)
        {
            ans = ans + (2 * ps[i]);
        }
        for (int i = ng.size() - 1; i >= 0; i = i - k)
        {

            ans = ans + (2 * ng[i]);
        }
        int a, b;
        if (ps.empty())
        {
            a = 0;
        }
        else
        {
            a = ps.back();
        }
        if (ng.empty())
        {
            b = 0;
        }
        else
        {
            b = ng.back();
        }
        ans = ans - max(a, b);
        cout << ans << endl;
    }
    return 0;
}