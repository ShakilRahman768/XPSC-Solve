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
        int n, cnt = 1, ans = 0, mx = INT_MIN;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(arr, arr + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    cnt++;
                }
                if (cnt > mx)
                {
                    mx = cnt;
                }
                if (arr[i] != arr[i + 1])
                {
                    cnt = 1;
                }
            }
            if (n == mx)
            {
                cout << 0 << "\n";
            }
            else
            {
                ans = n - mx;
                while (mx < n)
                {
                    ans++;
                    mx = mx * 2;
                }
                cout << ans << "\n";
            }
        }
    }
    return 0;
}