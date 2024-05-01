#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    while (1)
    {
        int n, q;
        cin >> n >> q;
        t++;
        if (n == 0 && q == 0)
        {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << "CASE# " << t << ":"
             << "\n";
        while (q--)
        {
            int m, flag = 0;
            cin >> m;
            int l = 0, r = n - 1, mid;
            int indx = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (arr[mid] >= m)
                {
                    indx = mid;
                    r = mid - 1;
                    if (arr[mid] == m)
                    {
                        flag = 1;
                    }
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (flag == 1)
            {
                cout << m << " found at " << indx + 1 << "\n";
            }
            else
            {
                cout << m << " not found"
                     << "\n";
            }
        }
    }
    return 0;
}