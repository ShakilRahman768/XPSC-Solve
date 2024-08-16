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
        long long int n, x;
        cin >> n >> x;
        long long int arr[n] = {0}, brr[n] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr[i] += arr[i - 1];
            brr[i] = min(brr[i - 1], arr[i]);
        }
        long long int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                ans = max(ans, arr[j] - brr[j - i] + i * x);
            }
            cout << ans << ' ';
        }
        cout << "\n";
    }
    return 0;
}