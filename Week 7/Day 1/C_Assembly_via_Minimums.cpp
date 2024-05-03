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
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        for (int i = 0; i < m; i += n)
        {
            cout << arr[i] << " ";
            n--;
        }
        cout << arr[m - 1] << "\n";
    }
    return 0;
}