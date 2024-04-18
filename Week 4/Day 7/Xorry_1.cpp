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
        int n, a = 0, b = 0, mn, mx;
        cin >> n;
        for (int i = 31; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                a |= (1 << i);
                break;
            }
        }
        b = n ^ a;
        mn = min(a, b);
        mx = max(a, b);
        cout << mn << " " << mx << "\n";
    }
    return 0;
}