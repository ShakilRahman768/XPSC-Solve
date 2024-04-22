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
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];
        long long int sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= a)
            {
                sum = sum + (a - 1);
            }
            else
            {
                sum = sum + arr[i];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}