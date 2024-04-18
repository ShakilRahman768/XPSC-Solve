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
        int n, mx, mn;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mx = arr[0];
        mn = arr[0];
        for (int i = 0; i < n; i++)
        {
            mx = mx | arr[i];
            mn = mn & arr[i];
        }
        cout << mx - mn << "\n";
    }
    return 0;
}