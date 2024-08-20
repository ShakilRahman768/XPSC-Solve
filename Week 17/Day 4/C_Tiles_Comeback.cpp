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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                a++;
            }
            if (arr[i] == arr[n - 1] && a >= k)
            {
                b++;
            }
        }
        if (arr[0] == arr[n - 1] && (a + b >= k))
        {
            cout << "YES" << "\n";
        }
        else if (a >= k && b >= k)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}