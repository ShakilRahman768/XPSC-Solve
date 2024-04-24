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
        string s1, s2;
        cin >> s1 >> s2;
        int x, y, l1 = 0, l2 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {
                x = i;
                y = j;
                l1 = 0;
                while (x < s1.length() && y < s2.length() && s1[x++] == s2[y++])
                {
                    l1++;
                }
                l2 = max(l1, l2);
            }
        }
        cout << s1.length() + s2.length() - 2 * l2 << "\n";
    }
    return 0;
}