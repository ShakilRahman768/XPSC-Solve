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
        int n, flag = 1;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[arr[i]] == 0)
            {
                mp[arr[i]]++;
            }
            else
            {
                cout << i + 1 << "\n";
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}