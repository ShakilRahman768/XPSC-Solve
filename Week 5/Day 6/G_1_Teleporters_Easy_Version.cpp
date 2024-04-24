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
        long long int n, c, ans = 0, sum = 0;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += (i + 1);
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > c)
            {
                break;
            }
            sum += arr[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}