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
        int n, q;
        cin >> n >> q;
        int arr[n];
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]].push_back(i);
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (mp[a].empty() || mp[b].empty())
            {
                cout << "NO"
                     << "\n";
            }
            else if (mp[a].front() <= mp[b].back())
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}