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
        int n, k;
        cin >> n >> k;
        int a = k, b = 0;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '0')
            {
                a++;
            }
            else
            {
                a -= k;
                b += a / (k + 1);
                a = 0;
            }
        }
        int ans = b + a / (k + 1);
        cout << ans << "\n";
    }
    return 0;
}