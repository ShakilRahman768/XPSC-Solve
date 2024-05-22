#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, h, t;
    cin >> n >> m;
    multiset<int> tc;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        tc.insert(h);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        auto it = tc.upper_bound(t);
        if (it == tc.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << *(--it) << "\n";
            tc.erase(it);
        }
    }
    return 0;
}