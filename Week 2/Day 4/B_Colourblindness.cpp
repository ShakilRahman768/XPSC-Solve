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
        string s1, s2;
        cin >> n;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] != 'R')
                {
                    cout << "NO"
                         << "\n";
                    flag = 0;
                    break;
                }
            }
            if (s2[i] == 'R')
            {
                if (s1[i] != 'R')
                {
                    cout << "NO"
                         << "\n";
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}