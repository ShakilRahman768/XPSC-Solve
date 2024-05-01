#include <bits/stdc++.h>
using namespace std;
int tallest(int arr[], int n, int x)
{
    int l = 0, r = n - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (x < arr[mid])
        {
            ans = arr[mid];
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int shorter(int arr[], int n, int x)
{
    int l = 0, r = n - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (x > arr[mid])
        {
            ans = arr[mid];
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int s = shorter(arr, n, x);
        int t = tallest(arr, n, x);
        if (s == -1)
        {
            cout << "X"
                 << " ";
        }
        else
        {
            cout << s << " ";
        }
        if (t == -1)
        {
            cout << "X"
                 << "\n";
        }
        else
        {
            cout << t << "\n";
        }
    }
    return 0;
}