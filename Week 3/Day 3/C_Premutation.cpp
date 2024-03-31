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
        int n, v, mx = INT_MIN;
        cin >> n;
        int arr[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            mp[arr[i][0]]++;
        }
        for (auto val : mp)
        {
            if (val.second > mx)
            {
                mx = val.second;
                v = val.first;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != v)
            {
                cout << v << " ";
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}