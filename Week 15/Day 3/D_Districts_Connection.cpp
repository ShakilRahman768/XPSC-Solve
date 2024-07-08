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
        int n, k = 0;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] != arr[1])
            {
                k = i;
            }
        }
        if (k == 0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            for (int i = 2; i <= n; i++)
            {
                if (arr[i] != arr[1])
                {
                    cout << "1 " << i << "\n";
                }
                else
                {
                    cout << k << " " << i << "\n";
                }
            }
        }
    }
    return 0;
}