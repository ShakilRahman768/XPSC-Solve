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
        if (n == 2)
        {
            cout << arr[0] << " " << arr[1] << "\n";
        }
        else
        {
            int j = -1, mx = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                if ((arr[i] - arr[i - 1]) < mx)
                {
                    j = i;
                    mx = arr[i] - arr[i - 1];
                }
            }
            for (int i = j; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i < j; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}