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
        long long int x, y = 0, z = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            x += y;
            y = x - i;
            if (y < 0)
            {
                z = 0;
            }
        }
        if (z != 0)
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