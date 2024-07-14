#include <bits/stdc++.h>
using namespace std;
const int m = 1e5 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0;
    cin >> n;
    int arr[n + 1];
    int cnt[m * 2 + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cnt[arr[i] + arr[j]]++;
        }
    }
    for (int i = 1; i <= m * 2; i++)
    {
        ans = max(ans, cnt[i]);
    }
    cout << ans << "\n";
    return 0;
}