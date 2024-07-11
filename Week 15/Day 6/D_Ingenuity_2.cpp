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
        string s;
        cin >> s;
        map<char, int> mp, tn;
        string ans = "";
        for (auto c : s)
        {
            mp[c]++;
        }
        if ((mp['N'] + mp['S']) % 2 != 0 || (mp['W'] + mp['E']) % 2 != 0)
        {
            cout << "NO" << "\n";
            flag = 0;
        }
        if (flag == 1)
        {
            if (n == 2 && (mp['N'] == 1 || mp['W'] == 1))
            {
                cout << "NO" << "\n";
                flag = 0;
            }
            if (flag == 1)
            {
                tn['E'] = 1, tn['W'] = 1;
                for (auto c : s)
                {
                    if (tn[c] % 2)
                    {
                        ans += 'H';
                    }
                    else
                    {
                        ans += 'R';
                    }
                    tn[c]++;
                }
                cout << ans << "\n";
            }
        }
    }
    return 0;
}