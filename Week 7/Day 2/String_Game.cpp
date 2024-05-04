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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "Ramos"
                 << "\n";
        }
        else
        {
            int zero = 0, one = 0;
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
            int cnt = min(zero, one);
            if (cnt % 2 != 0)
            {
                cout << "Zlatan"
                     << "\n";
            }
            else
            {
                cout << "Ramos"
                     << "\n";
            }
        }
    }
    return 0;
}