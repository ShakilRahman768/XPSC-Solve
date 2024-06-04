#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        v.push_back({s, 1});
        v.push_back({e, -1});
    }
    sort(v.begin(), v.end());
    int cp = 0, mp = 0;
    for (const pair<int, int> &x : v)
    {
        cp += x.second;
        mp = max(mp, cp);
    }
    cout << mp << "\n";
}