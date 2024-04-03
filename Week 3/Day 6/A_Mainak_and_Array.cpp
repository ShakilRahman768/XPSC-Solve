#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, ans;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ans = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(arr[i] - arr[0], ans);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(arr[i] - arr[i + 1], ans);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(arr[n - 1] - arr[i], ans);
        }
        cout << ans << "\n";
    }
    return 0;
}