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
        int n, m, p = 0, nd = 0;
        string s, l;
        cin >> n;
        cin >> s;
        m = n - 1;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == s[m])
            {
                p += 2;
            }
            else
            {
                nd++;
            }
            m--;
        }
        for (int i = 0; i <= n; i++)
        {
            if (i < nd)
            {
                l.push_back('0');
            }
            else
            {
                int t = i - nd;
                if (t % 2 == 0)
                {
                    if (t <= p)
                    {
                        l.push_back('1');
                    }
                    else
                    {
                        l.push_back('0');
                    }
                }
                else
                {
                    if (n % 2 != 0)
                    {
                        if ((t - 1) <= p)
                        {
                            l.push_back('1');
                        }
                        else
                        {
                            l.push_back('0');
                        }
                    }
                    else
                    {
                        l.push_back('0');
                    }
                }
            }
        }
        cout << l << "\n";
    }
    return 0;
}