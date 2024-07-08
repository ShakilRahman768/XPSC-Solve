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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            mp[v[i]]++;
        }
        vector<int> v2;
        for (auto &[k, v] : mp)
        {
            v2.push_back(v);
        }
        sort(v2.begin(), v2.end(), greater<int>());
        for (int i = 1; i < v2.size(); i++)
        {
            v2[0] -= v2[i];
        }
        if (v2[0] < 0)
        {
            cout << n % 2 << "\n";
        }
        else
        {
            cout << v2[0] << "\n";
        }
    }
    return 0;
}