#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (t--)
    {
        int m;
        cin >> m;
        int l = 0, r = n - 1, mid;
        int indx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (arr[mid] <= m)
            {
                indx = mid;
                l = mid + 1;
            }
            else if (arr[mid] > m)
            {
                r = mid - 1;
            }
        }
        cout << indx + 1 << "\n";
    }
    return 0;
}
