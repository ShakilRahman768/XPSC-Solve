#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int arr[100005];
        int brr[100005];
        for (int i = 1; i <= k; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> brr[i];
        }
        while (q--)
        {
            int d, l, ans;
            cin >> d;
            l = lower_bound(arr + 1, arr + 1 + k, d) - arr - 1;
            ans = brr[l] + (d - arr[l]) * 1.0 * (brr[l + 1] - brr[l]) / (arr[l + 1] - arr[l]);
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}