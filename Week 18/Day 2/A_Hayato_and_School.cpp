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
        int n, cntodd = 0, cnteven = 0, f1 = 0, f2 = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cntodd++;
            }
            else
            {
                cnteven++;
            }
        }
        if (cntodd == 0)
        {
            cout << "NO" << "\n";
        }
        else if (cntodd == 1)
        {
            cout << "YES" << "\n";
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0 && f1 == 0)
                {
                    cout << i + 1 << " ";
                    f1 = 1;
                }
                if (arr[i] % 2 == 0 && (f2 == 0 || f2 == 1))
                {
                    cout << i + 1 << " ";
                    f2++;
                }
                if (f1 == 1 && f2 == 2)
                {
                    break;
                }
            }
            cout << "\n";
        }
        else if (cntodd == 2)
        {
            if (cnteven == 1)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] % 2 != 0 && f1 == 0)
                    {
                        cout << i + 1 << " ";
                        f1 = 1;
                    }
                    if (arr[i] % 2 == 0 && (f2 == 0 || f2 == 1))
                    {
                        cout << i + 1 << " ";
                        f2++;
                    }
                    if (f1 == 1 && f2 == 2)
                    {
                        break;
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "YES" << "\n";
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0 && f1 < 3)
                {
                    cout << i + 1 << " ";
                    f1++;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}