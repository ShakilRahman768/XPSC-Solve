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
        int n, m, cnt = 0, mn = INT_MAX;
        cin >> n >> m;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            s.push_back(s1);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string s1 = s[i];
                string s2 = s[j];
                for (int k = 0; k < m; k++)
                {
                    cnt = cnt + abs(int(s1[k]) - int(s2[k]));
                }
                if (cnt < mn)
                {
                    mn = cnt;
                }
                cnt = 0;
            }
        }
        cout << mn << "\n";
    }
    return 0;
}