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
        int n, ng = 0;
        long long int sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                ng++;
                sum = sum + (arr[i] * (-1));
                arr[i] = (arr[i] * (-1));
            }
            else
            {
                sum = sum + arr[i];
            }
        }
        sort(arr, arr + n);
        if (ng % 2 == 0)
        {
            cout << sum << "\n";
        }
        else
        {
            cout << sum - (1LL * (arr[0] * 2)) << "\n";
        }
    }
    return 0;
}