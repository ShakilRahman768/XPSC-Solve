#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string s1, ans;
    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.find(s[i]) == mp.end())
        {
            s1 = s[i];
            ans = ans + (s1[s1.size() - 2]);
            ans = ans + (s1[s1.size() - 1]);
        }
        mp[s[i]] = i;
    }
    cout << ans;
    return 0;
}