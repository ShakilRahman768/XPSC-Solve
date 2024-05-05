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
        int n, s, mn;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mn = abs(arr[0] - arr[1]);
        for (int i = 1; i < n - 1; i++)
        {
            s = max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            if (s < mn)
            {
                mn = s;
            }
        }
        s = abs(arr[n - 1] - arr[n - 2]);
        if (s < mn)
        {
            mn = s;
        }
        cout << mn << "\n";
    }
    return 0;
}