#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n, int mid)
{
    int j = 0, cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - arr[j]) > (2 * mid))
        {
            cnt++;
            j = i;
        }
    }
    if (cnt <= 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
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
        sort(arr, arr + n);
        int l = 0, r = 1e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (check(arr, n, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}