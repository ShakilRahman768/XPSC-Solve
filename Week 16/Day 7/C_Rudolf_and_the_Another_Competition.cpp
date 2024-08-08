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
        long long int n, m, h, p, crnt, ans, j, x, y;
        cin >> n >> m >> h;
        p = 1;
        int arr[m + 1];
        for (int i = 1; i <= n; i++)
        {
            crnt = 0;
            ans = 0;
            for (j = 1; j <= m; j++)
            {
                cin >> arr[j];
            }
            sort(arr + 1, arr + m + 1);
            for (j = 1; j <= m; j++)
            {
                if (crnt + arr[j] <= h)
                {
                    crnt = crnt + arr[j];
                    ans += crnt;
                }
                else
                {
                    break;
                }
            }
            if (i == 1)
            {
                x = ans;
                y = j - 1;
            }
            else if (j - 1 > y)
            {
                p++;
            }
            else if (j - 1 == y && x > ans)
            {
                p++;
            }
        }
        cout << p << "\n";
    }
    return 0;
}