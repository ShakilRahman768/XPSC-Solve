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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        int arr[n];
        int ans = 1, num = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((i - num + 1 > k) || (arr[i] - arr[num] > d + w))
            {
                ans++;
                num = i;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}