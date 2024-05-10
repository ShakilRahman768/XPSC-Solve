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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int ans = 0, cnt = 0, mx = 0, one = 0, zero = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
                cnt++;
                zero = (i + 1);
            }
            else
            {
                ans += cnt;
                if (one == 0)
                {
                    one = (i + 1);
                }
            }
        }
        mx = max(mx, ans);
        cnt = 0, ans = 0;
        if (zero > 0)
        {
            arr[zero - 1] = 1;
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] == 0)
                {
                    cnt++;
                }
                else
                {
                    ans += cnt;
                }
            }
            mx = max(mx, ans);
            cnt = 0, ans = 0;
            arr[zero - 1] = 0;
        }
        if (one > 0)
        {
            arr[one - 1] = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] == 0)
                {
                    cnt++;
                }
                else
                {
                    ans += cnt;
                }
            }
            mx = max(mx, ans);
        }
        cout << mx << "\n";
    }
    return 0;
}