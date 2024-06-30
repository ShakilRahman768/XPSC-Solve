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
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        int m1 = 0, m2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                if (arr[i] > brr[i])
                {
                    m1 += arr[i];
                }
                else
                {
                    m2 += brr[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == brr[i])
            {
                if (arr[i] == 1)
                {
                    if (m1 <= m2)
                    {
                        m1++;
                    }
                    else
                    {
                        m2++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == brr[i])
            {
                if (arr[i] == -1)
                {
                    if (m1 <= m2)
                    {
                        m2 += arr[i];
                    }
                    else
                    {
                        m1 += arr[i];
                    }
                }
            }
        }
        cout << min(m1, m2) << "\n";
    }
    return 0;
}