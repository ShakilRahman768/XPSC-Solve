#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int trr[], int zrr[], int yrr[], int n, int m, int mid)
{
    int rs = 0;
    for (int i = 0; i < n; i++)
    {
        int bl = mid / (trr[i] * zrr[i] + yrr[i]);
        int rm = mid - bl * (trr[i] * zrr[i] + yrr[i]);
        bl *= zrr[i];
        if (rm >= trr[i])
        {
            if (rm / trr[i] > zrr[i])
            {
                bl += zrr[i];
            }
            else
                bl += (rm / trr[i]);
        }
        arr[i] = bl;
        rs += arr[i];
    }
    if (rs >= m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    int trr[n];
    int yrr[n];
    int zrr[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> trr[i] >> zrr[i] >> yrr[i];
    }
    if (m == 0)
    {
        cout << 0 << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << "0 ";
        }
        return 0;
    }
    int l = 0, r = 1e7, cnt = 0;
    while (l + 1 < r)
    {
        cnt++;
        int mid = (l + r) / 2;
        if (check(arr, trr, zrr, yrr, n, m, mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << "\n";
    int t = r;
    for (int i = 0; i < n; i++)
    {
        int bl = t / (trr[i] * zrr[i] + yrr[i]);
        int rm = t - bl * (trr[i] * zrr[i] + yrr[i]);
        bl *= zrr[i];
        if (rm >= trr[i])
        {
            if (rm / trr[i] > zrr[i])
            {
                bl += zrr[i];
            }
            else
            {
                bl += (rm / trr[i]);
            }
        }
        arr[i] = bl;
    }
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (b + arr[i] > m)
        {
            if (m > 0)
            {
                cout << m - b << " ";
                m = 0;
            }
            else
            {
                cout << "0 ";
            }
        }
        else
        {
            cout << arr[i] << " ";
        }
        b += arr[i];
    }
    cout << "\n";
    return 0;
}