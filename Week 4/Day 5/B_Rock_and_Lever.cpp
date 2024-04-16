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
        long long int n, cnt = 1, ans = 0;
        cin >> n;
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            brr[i] = __lg(arr[i]);
        }
        sort(brr, brr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (brr[i] == brr[i + 1])
            {
                cnt++;
            }
            else
            {
                ans = ans + ((cnt * (cnt - 1)) / 2);
                cnt = 1;
            }
        }
        ans = ans + ((cnt * (cnt - 1)) / 2);
        cout << ans << "\n";
    }
    return 0;
}