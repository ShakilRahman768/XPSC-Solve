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
        int x, flag = 0, f = -1, l = -1;
        while (n--)
        {
            cin >> x;
            if (flag == 1)
            {
                if (x >= l && x <= f)
                {
                    l = x;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (f == -1)
                {
                    f = x;
                    l = x;
                    cout << 1;
                }
                else if (x >= l)
                {
                    l = x;
                    cout << 1;
                }
                else if (f >= x)
                {
                    l = x;
                    flag = 1;
                    cout << 1;
                }
                else
                    cout << 0;
            }
        }
        cout << "\n";
    }
    return 0;
}