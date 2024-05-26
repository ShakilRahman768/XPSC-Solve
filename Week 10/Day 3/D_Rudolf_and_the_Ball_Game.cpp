#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> v1(n + 1), v2(n + 1);
        v1[x - 1] = 1;
        for (int i = 0; i < m; i++)
        {
            int d;
            char c;
            cin >> d >> c;
            for (int i = 0; i <= n; i++)
            {
                v2[i] = 0;
            }
            for (int j = 0; j < n; j++)
            {
                if (v1[j] == 0)
                {
                    continue;
                }
                if (c == '0' || c == '?')
                {
                    v2[(j + d) % n] = 1;
                }
                if (c == '1' || c == '?')
                {
                    v2[(n + (j - d)) % n] = 1;
                }
            }
            v1 = v2;
        }
        int cnt = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == 1)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != 0)
            {
                cout << i + 1 << " ";
            }
        }
        cout << "\n";
    }
}