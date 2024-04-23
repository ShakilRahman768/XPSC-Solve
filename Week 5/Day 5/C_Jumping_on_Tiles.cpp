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
        string s;
        cin >> s;
        int sum = 0;
        vector<int> v;
        map<char, vector<int>> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]].push_back(i + 1);
        }
        if (s[0] > s[s.length() - 1])
        {
            sum = abs(s[0] - s[s.length() - 1]);
            for (int i = 0; s[0] + i >= s[s.length() - 1]; i--)
            {
                char c = s[0] + i;
                if (mp.find(c) != mp.end())
                {
                    for (auto x : mp[c])
                    {
                        v.push_back(x);
                    }
                }
            }
            cout << sum << " ";
            cout << v.size() << "\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (s[0] < s[s.length() - 1])
        {
            sum = abs(s[0] - s[s.length() - 1]);
            for (int i = 0; s[0] + i <= s[s.length() - 1]; i++)
            {
                char c = s[0] + i;
                if (mp.find(c) != mp.end())
                {
                    for (auto x : mp[c])
                    {
                        v.push_back(x);
                    }
                }
            }
            cout << sum << " ";
            cout << v.size() << "\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << 0 << " ";
            cout << mp[s[0]].size() << "\n";
            for (auto x : mp[s[0]])
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}