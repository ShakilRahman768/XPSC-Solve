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
        int n, d;
        string s, s1, ans;
        char c;
        cin >> n;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != 48)
            {
                s1 = s[i] + 48;
                ans.append(s1);
            }
            else
            {
                c = s[i - 2];
                d = c - '0';
                c = s[i - 1];
                d = (d * 10) + (c - '0');
                d = d + 96;
                c = d;
                ans.push_back(c);
                i -= 2;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
    return 0;
}