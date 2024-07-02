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
        int n, m, k;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] -= a;
            v[i] *= -1;
        }
        sort(v.rbegin(), v.rend());
        int j = n - 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (j > i && v[i] + v[j] < 0)
            {
                j--;
            }
            if (j <= i)
            {
                break;
            }
            ans++;
            j--;
        }
        cout << ans << "\n";
    }
}