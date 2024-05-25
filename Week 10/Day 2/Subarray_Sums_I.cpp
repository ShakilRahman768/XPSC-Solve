#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, sum, cnt = 0, l = 0;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        while (sum > x)
        {
            sum -= arr[l];
            l++;
        }
        if (sum == x)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}
