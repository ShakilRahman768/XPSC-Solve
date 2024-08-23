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
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (n % 2 == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            int i = 0, j = n / 2;
            vector<int> ans;
            while (i < n / 2)
            {
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                if (i > 0 && v[i] == v[j - 1])
                {
                    cout << "NO" << '\n';
                    break;
                }
                if (v[i] == v[j])
                {
                    cout << "NO" << '\n';
                    break;
                }
                i++;
                j++;
            }
            if (i == n / 2)
            {
                cout << "YES" << '\n';
                for (int i = 0; i < n; i++)
                {
                    cout << ans[i] << ' ';
                }
                cout << '\n';
            }
        }
    }
    return 0;
}