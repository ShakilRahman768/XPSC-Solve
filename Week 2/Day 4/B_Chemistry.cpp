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
        int n, k, flag = 1;
        cin >> n >> k;
        string s;
        cin >> s;
        k = k + 1;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (v[i] > 0)
            {
                if (v[i] % 2 != 0)
                {

                    if (k > 0)
                    {
                        v[i]--;
                        k--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (v[i] > 0)
            {
                if (v[i] % 2 != 0)
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