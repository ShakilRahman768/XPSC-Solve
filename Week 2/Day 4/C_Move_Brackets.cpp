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
        int n, a = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                a++;
            }
            else if (s[i] == ')')
            {
                if (a > 0)
                {
                    a--;
                }
            }
        }
        cout << a << "\n";
    }
    return 0;
}