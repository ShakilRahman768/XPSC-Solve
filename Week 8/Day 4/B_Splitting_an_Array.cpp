#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int n, int k, long long int mid)
{
    int s = 1, flag = 1;
    long long int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            flag = 0;
            break;
        }
        if (temp + arr[i] <= mid)
        {
            temp += arr[i];
        }
        else
        {
            temp = arr[i];
            s++;
        }
    }
    if (flag == 1)
    {
        return s <= k;
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
    int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    long long int l = 0, r = sum + 100;
    while (l + 1 < r)
    {
        long long int mid = (l + r) / 2;
        if (check(arr, n, k, mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << "\n";
    return 0;
}