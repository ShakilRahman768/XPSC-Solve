#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt, mn, mx, sum, ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        cnt = 0;
        sum = 0;
        mx = INT_MIN;
        mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cnt++;
                sum += arr[j];
                if (arr[j] > mx)
                {
                    mx = arr[j];
                }
                if (arr[j] < mn)
                {
                    mn = arr[j];
                }
            }
        }
        int dif = mx - mn;
        if (cnt >= 2 && sum >= l && sum <= r && dif >= x)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}