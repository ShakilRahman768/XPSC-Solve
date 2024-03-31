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
        int n, flag;
        cin >> n;
        string s[n];
        string ans;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 1; j < s[i].length(); j++)
            {
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, s[i].length() - 1);
                if (mp[s1] && mp[s2])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                ans.append("1");
            }
            else
            {
                ans.append("0");
            }
        }
        cout << ans << "\n";
    }
    return 0;
}