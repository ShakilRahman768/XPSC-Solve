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
        int n, indx, ans = -1;
        cin >> n;
        int arr[1005] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> indx;
            arr[indx] = i;
        }
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = i; j <= 1000; j++)
            {
                if (arr[i] > 0 && arr[j] > 0)
                {
                    if (__gcd(i, j) == 1)
                    {
                        ans = max(ans, arr[i] + arr[j]);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}