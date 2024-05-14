#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n, int k, long long int mid)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            sum += mid;
        }
        else
        {
            sum += arr[i];
        }
    }
    if ((sum / mid) >= k)
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

    int k, n;
    cin >> k >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int l = 0, r = 1e18;
    while (l + 1 < r)
    {
        long long int mid = (l + r) / 2;
        if (check(arr, n, k, mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";
    return 0;
}