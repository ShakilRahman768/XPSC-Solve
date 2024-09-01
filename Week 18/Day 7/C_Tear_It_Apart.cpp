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
        int a = 0, b = 0, mn = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            char c = i + 'a';
            a = 0;
            b = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] != c)
                {
                    a++;
                    b = max(b, a);
                }
                else
                {
                    a = 0;
                }
            }
            int d = 0;
            while (b > 0)
            {
                b /= 2;
                d++;
            }
            mn = min(d, mn);
        }
        cout << mn << "\n";
    }
    return 0;
}