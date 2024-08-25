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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int temp = arr[1];
        arr[1] = arr[n - 1];
        arr[n - 1] = temp;
        if (arr[0] != arr[1])
        {
            cout << "YES" << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}