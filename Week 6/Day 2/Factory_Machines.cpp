#include <bits/stdc++.h>
using namespace std;
int n, t;
int check(int arr[], long long int mid)
{
    long long int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (mid / arr[i]);
        if (cnt >= t)
        {
            return 1;
        }
    }
    return 0;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(arr, mid))
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
    return 0;
}