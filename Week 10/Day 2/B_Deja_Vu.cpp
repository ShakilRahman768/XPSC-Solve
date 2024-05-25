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
        long long int n, q, mn = INT_MAX;
        cin >> n >> q;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long int temp;
            cin >> temp;
            if (temp < mn)
            {
                for (int j = 0; j < n; j++)
                {
                    long long int num = 1ll * pow(2, temp);
                    if (arr[j] % num == 0)
                    {
                        arr[j] += num / 2;
                    }
                }
                mn = temp;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}