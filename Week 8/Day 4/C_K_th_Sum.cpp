#include <bits/stdc++.h>
using namespace std;

int check(long long int arr[], long long int brr[], int n, int k, long long int mid)
{
    long long int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] + brr[j] >= mid)
        {
            j++;
        }
        else
        {
            i++;
            cnt += (n - j);
        }
    }
    if (cnt < k)
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

    int n, k;
    cin >> n >> k;
    long long int arr[n];
    long long int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sort(arr, arr + n);
    sort(brr, brr + n, greater<int>());
    long long int l = 1, r = 1e18;
    for (int i = 0; i < 80; i++)
    {
        long long int mid = (l + r) / 2;
        if (check(arr, brr, n, k, mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}