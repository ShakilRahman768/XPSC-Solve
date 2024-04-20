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
        int lindx, mindx = n, rindx;
        int l = INT_MAX, m = 0, r = arr[0];
        int mf = 0, rf = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if ((l > arr[i]) && (i < mindx))
            {
                l = arr[i];
                lindx = i;
                m = arr[i];
            }
            if ((m < arr[i]) && (i > lindx))
            {
                m = arr[i];
                mindx = i;
                mf = 1;
            }
            if ((mf == 1) && (m > arr[i]) && (i > mindx))
            {
                r = arr[i];
                rindx = i;
                rf = 1;
            }
            if (mf == 1 && rf == 1)
            {
                cout << "YES"
                     << "\n";
                cout << lindx + 1 << " " << mindx + 1 << " " << rindx + 1 << "\n";
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}