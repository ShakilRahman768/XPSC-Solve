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
        long long int x, y, r;
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                r = y * y;
                cout << r - x + 1 << "\n";
            }
            else
            {
                r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << "\n";
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                r = x * x;
                cout << r - y + 1 << "\n";
            }
            else
            {
                r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << "\n";
            }
        }
    }
    return 0;
}