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
        int l, r, flag1 = 1, flag2 = 1;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if (i % 2 == 0 && i != 2)
            {
                cout << 2 << " " << i - 2 << "\n";
                flag1 = 0;
                flag2 = 0;
                break;
            }
        }
        if (flag1 == 1)
        {
            for (int i = 3; i < sqrt(l) + 1; i++)
            {
                if (l % i == 0)
                {
                    cout << i << " " << l - i << "\n";
                    flag2 = 0;
                    break;
                }
            }
        }
        if (flag2 == 1)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}