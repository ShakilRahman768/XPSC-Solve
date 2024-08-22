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
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << 0 << "\n";
        }
        else if (arr[1] == n && arr[n] == 1)
        {
            cout << 3 << "\n";
        }
        else if (arr[1] != 1 && arr[n] != n)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}