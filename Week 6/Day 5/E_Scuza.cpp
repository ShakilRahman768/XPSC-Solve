#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int l = 1, r = n, mid, ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key >= arr[mid])
        {
            ans = mid;
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

    int t;
    cin >> t;
    while (t--)
    {
        int n, q, mx = INT_MIN;
        cin >> n >> q;
        int arr[n + 1];
        int brr[n + 1];
        long long int crr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
            brr[i] = mx;
        }
        crr[1] = arr[1];
        for (int i = 2; i <= n; i++)
        {
            crr[i] = crr[i - 1] + arr[i];
        }
        while (q--)
        {
            int x;
            cin >> x;
            int c = binarysearch(brr, n, x);
            if (c == -1)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << crr[c] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}