#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mx = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int g = mx - arr[0];
    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, mx - arr[i]);
    }
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (mx - arr[i]) / g;
    }
    cout << ans << " " << g << "\n";
    return 0;
}