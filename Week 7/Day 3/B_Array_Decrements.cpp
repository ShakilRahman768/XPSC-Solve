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
        int n, flag = 1, dif, mx = INT_MIN;
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
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= brr[i])
            {
                dif = arr[i] - brr[i];
                if (dif > mx)
                {
                    mx = dif;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] -= mx;
            if (arr[i] < 0)
            {
                arr[i] = 0;
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