#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, ans = 0;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << ans << "\n";
    return 0;
}