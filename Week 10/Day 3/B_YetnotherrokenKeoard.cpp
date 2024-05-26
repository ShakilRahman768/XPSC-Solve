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
        string s;
        cin >> s;
        int c1 = 0, c2 = 0;
        string ans;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
            {
                c1++;
            }
            else if (s[i] == 'B')
            {
                c2++;
            }
            else if (islower(s[i]) && (c1 > 0))
            {
                c1--;
            }
            else if (isupper(s[i]) && (c2 > 0))
            {
                c2--;
            }
            else
            {
                ans += s[i];
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans.size() == 0)
        {
            cout << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
}