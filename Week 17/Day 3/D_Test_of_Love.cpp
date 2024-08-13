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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int j = m;
        for (int i = 0; i < n && j; ++i)
        {
            if (s[i] == 'L')
            {
                j = m;
            }
            else if (s[i] == 'W' && j == 1 && k)
            {
                k--;
            }
            else
            {
                j--;
            }
        }
        if (j > 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}