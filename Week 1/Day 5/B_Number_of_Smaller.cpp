#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    int l = 0, r = 0, ans = 0;
    while (r < m)
    {
        if (l < n && arr[l] < brr[r])
        {
            ans++;
            l++;
        }
        else
        {
            r++;
            cout << ans << " ";
        }
    }
    cout << "\n";
    return 0;
}