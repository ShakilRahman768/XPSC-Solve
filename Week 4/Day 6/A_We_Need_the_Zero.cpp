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
        int n, x = 0, y = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x = x ^ arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] ^ x;
        }
        for (int i = 0; i < n; i++)
        {
            y = y ^ arr[i];
        }
        if (y == 0)
            cout << x << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}