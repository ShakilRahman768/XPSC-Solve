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
    long long int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += arr[r];
        while (sum >= s && l <= r)
        {
            ans += n - r;
            sum -= arr[l];
            l++;
        }
        r++;
    }
    cout << ans << "\n";
    return 0;
}