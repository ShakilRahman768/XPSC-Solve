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
        int n, v, cnt = 0;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            v = arr[i];
            if (mp[arr[i]] != 0)
            {
                cnt++;
                while (mp[v] > 0)
                {
                    mp[v]--;
                    v++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}