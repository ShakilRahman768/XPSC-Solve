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
        int n, cnt = 0;
        long long int sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + abs(arr[i]);
        }
        int l = 0, r = n;
        while (l < n)
        {
            if (arr[l] < 0)
            {
                while (l < r && arr[l] <= 0)
                {
                    l++;
                }
                cnt++;
            }
            else
            {
                l++;
            }
        }
        cout << sum << " " << cnt << "\n";
    }
    return 0;
}