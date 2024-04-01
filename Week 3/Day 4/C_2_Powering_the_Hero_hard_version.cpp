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
        long long int n, sum = 0;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                s.insert(arr[i]);
                mp[arr[i]]++;
            }
            else
            {
                if (!s.empty())
                {
                    int mx = *(s.rbegin());
                    sum = sum + mx;
                    if (mp[mx] == 1)
                    {
                        s.erase(mx);
                    }
                    mp[mx]--;
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}