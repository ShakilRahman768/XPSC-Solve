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
        long long int sum1 = 0, sum2 = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                if (sum1 <= (abs(arr[i])))
                {
                    sum2 = sum2 + sum1;
                    arr[i] = arr[i] + sum1;
                    sum1 = 0;
                }
                else if (sum1 > (abs(arr[i])))
                {

                    sum1 = sum1 - (abs(arr[i]));
                    sum2 = sum2 + (abs(arr[i]));
                    arr[i] = 0;
                }
            }
            else
            {
                sum1 = sum1 + arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                if (sum2 >= arr[i])
                {
                    sum2 = sum2 - arr[i];
                    arr[i] = 0;
                }
                else
                {
                    arr[i] = arr[i] - sum2;
                    sum2 = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                ans = ans + (abs(arr[i]));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}