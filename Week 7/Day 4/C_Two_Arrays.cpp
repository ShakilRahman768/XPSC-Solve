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
        int n, flag = 1;
        cin >> n;
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < brr[i])
            {
                arr[i] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                cout << "NO"
                     << "\n";
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}