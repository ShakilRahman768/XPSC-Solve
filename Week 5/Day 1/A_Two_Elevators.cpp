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
        int a, b, c, l;
        cin >> a >> b >> c;
        if (c > b)
        {
            l = (c - b) + c;
            if (a > l)
            {
                cout << 2 << "\n";
            }
            else if (a < l)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 3 << "\n";
            }
        }
        else if (a < b)
        {
            cout << 1 << "\n";
        }
        else if (a > b)
        {
            cout << 2 << "\n";
        }
        else if (a == b)
        {
            cout << 3 << "\n";
        }
    }
    return 0;
}