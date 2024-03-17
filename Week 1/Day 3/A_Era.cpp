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
        int j = 1, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > j)
            {
                j++;
                cnt++;
            }
            j++;
        }
        cout << cnt << "\n";
    }
    return 0;
}