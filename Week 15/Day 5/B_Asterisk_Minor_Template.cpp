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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int flag = 1;
        if (a[0] == b[0])
        {
            cout << "YES" << "\n";
            cout << a[0] << "*" << "\n";
            flag = 0;
        }
        if ((a[n - 1] == b[m - 1]) && flag == 1)
        {
            cout << "YES" << "\n"
                 << "*";
            cout << a[n - 1] << "\n";
            flag = 0;
        }
        if (flag == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    if (a[i] == b[j] && a[i + 1] == b[j + 1])
                    {
                        cout << "YES" << "\n"
                             << "*";
                        cout << a[i] << a[i + 1] << "*" << "\n";
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}