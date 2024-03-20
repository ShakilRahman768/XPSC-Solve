#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m;
    cin >> n >> m;
    long long int arr[n], brr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    int l = 0, r = 0;
    long long int ans = 0;
    while (l < n && r < m)
    {
        long long int c1 = 0, c2 = 0, cr = arr[l];
        while (arr[l] == cr && l < n)
        {
            c1++;
            l++;
        }

        while (cr > brr[r] && r < m)
        {
            r++;
        }
        while (brr[r] == cr && r < m)
        {
            c2++;
            r++;
        }
        ans += (c1 * c2);
    }
    cout << ans << "\n";
    return 0;
}