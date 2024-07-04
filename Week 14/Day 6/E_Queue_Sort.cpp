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
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[j])
            {
                j = i;
            }
        }
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << j << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}