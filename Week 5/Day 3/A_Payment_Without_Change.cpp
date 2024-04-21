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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        if ((a * n) <= s)
        {
            if ((a * n) == s)
            {
                cout << "YES"
                     << "\n";
            }
            else if (((a * n) + b) >= s)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else if ((a * n) > s)
        {
            int m = s % n;
            if (m <= b)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}