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
        sort(arr, arr + n);
        int cnt = 0, m;
        for (int i = 0; i < n; i += 2)
        {
            m = i / 2 + 1;
            for (int j = i; j >= i - (i / 2); j--)
            {
                if (arr[j] <= m)
                {
                    m--;
                }
            }
            if (m == 0)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}