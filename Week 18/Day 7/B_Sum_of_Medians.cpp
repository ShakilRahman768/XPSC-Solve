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
        long long int n, k;
        cin >> n >> k;
        int ar[n * k];
        for (int i = 0; i < n * k; i++)
        {
            cin >> ar[i];
        }
        long long int ans = 0, p = n / 2, l = (n * k);
        for (int i = 0; i < k; i++)
        {
            l = l - p - 1;
            ans += ar[l];
        }
        cout << ans << "\n";
    }
    return 0;
}