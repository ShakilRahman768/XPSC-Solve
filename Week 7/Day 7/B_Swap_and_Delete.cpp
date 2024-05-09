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
        int n = s.length();
        int zero = 0, one = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (one > 0)
                {
                    one--;
                }
                else
                {
                    ans = n - i;
                    break;
                }
            }
            else
            {
                if (zero > 0)
                {
                    zero--;
                }
                else
                {
                    ans = n - i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}