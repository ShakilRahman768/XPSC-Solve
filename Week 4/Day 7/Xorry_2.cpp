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
        int n, a = 0, cnt = 0, i, j;
        cin >> n;
        for (i = 31; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                a++;
            }
            if (a == 2)
            {
                break;
            }
        }
        for (j = i; j >= 0; j--)
        {
            if ((n & (1 << j)) == 0)
            {
                cnt++;
            }
        }
        cout << (1 << cnt) << "\n";
    }
    return 0;
}