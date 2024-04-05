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
        int n, x = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x ^= arr[i];
        }
        int ans = x;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (x ^ arr[i]));
        }

        cout << ans << '\n';
    }
    return 0;
}