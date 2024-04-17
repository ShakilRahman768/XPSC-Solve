#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int odd = 0, ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] % 2 != 0)
                odd++;
        }
        if (odd > 0)
            ans = 1;
        for (int i = k; i < n; i++)
        {
            if (arr[i - k] % 2 != 0)
                odd--;
            if (arr[i] % 2 != 0)
                odd++;
            if (odd > 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
