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
        int n, m, t = 0, x;
        cin >> m >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int l = 0, r = m;
        for (int i = 0; i < n; i++)
        {
            x = m - arr[i];
            l += x;
            if (l >= r)
            {
                break;
            }
            t++;
        }
        cout << t << "\n";
    }
    return 0;
}