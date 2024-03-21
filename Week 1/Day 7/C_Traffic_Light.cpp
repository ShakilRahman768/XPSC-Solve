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
        int n, cnt = 1, mx = INT_MIN;
        string s;
        char c;
        cin >> n >> c;
        cin >> s;
        if (c == 'g')
        {
            cout << 0 << "\n";
        }
        else
        {
            s = s + s;
            int i = 0, j = 1;
            while (i < n + n && j < n + n)
            {
                if (s[i] == c)
                {
                    if (s[j] != 'g')
                    {
                        cnt++;
                        j++;
                    }
                    else if (s[j] == 'g')
                    {
                        if (cnt > mx)
                        {
                            mx = cnt;
                        }
                        cnt = 1;
                        i++;
                        if (i >= j)
                        {
                            j++;
                        }
                    }
                }
                else
                {
                    i++;
                    if (i >= j)
                    {
                        j++;
                    }
                }
            }
            cout << mx << "\n";
        }
    }
    return 0;
}