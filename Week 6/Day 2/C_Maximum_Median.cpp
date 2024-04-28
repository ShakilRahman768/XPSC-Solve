#include <bits/stdc++.h>
using namespace std;
int n, k;
int check(int arr[], long long int mid)
{
    long long cnt = 0;
    for (int i = (n / 2); i < n; i++)
    {
        if (arr[i] < mid)
        {
            cnt += (mid - arr[i]);
        }
    }
    if (cnt <= k)
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

    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(arr, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}