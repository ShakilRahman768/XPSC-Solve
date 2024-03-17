#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, i, sum = 0, sum1;
    cin >> n;
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << "\n";
    }
    else
    {
        sort(arr, arr + n);
        for (i = 0; i < n; i++)
        {
            sum1 = sum - arr[i];
            if (sum1 % 2 == 0)
            {
                cout << sum1 << "\n";
                break;
            }
        }
    }
    return 0;
}