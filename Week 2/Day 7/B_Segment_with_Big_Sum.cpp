#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, s;
    cin >> n >> s;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int l = 0, r = 0, sum = 0, ans = LLONG_MAX;
    while (r < n)
    {
        sum += arr[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= arr[l];
            l++;
        }
        r++;
    }
    if (ans == LLONG_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans << '\n';
    }
    return 0;
}