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
        long long int n, q, sum = 0;
        cin >> n >> q;
        long long int arr[n + 1];
        long long int brr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        brr[0] = 0;
        brr[1] = arr[1];
        for (int i = 2; i <= n; i++)
        {
            brr[i] = brr[i - 1] + arr[i];
        }
        while (q--)
        {
            long long int a, b, c, sum1 = 0, ans = 0;
            cin >> a >> b >> c;
            sum1 = brr[b] - brr[a - 1];
            ans = sum - sum1;
            ans = ans + (c * (b - a + 1));
            if (ans % 2 != 0)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}