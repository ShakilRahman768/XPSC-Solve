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
        string s;
        vector<char> v;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < 90)
            {
                s[i] = s[i] + 32;
            }
        }
        v.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                v.push_back(s[i]);
            }
        }
        if (v.size() != 4)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            if (v[0] == 'm' && v[1] == 'e' && v[2] == 'o' && v[3] == 'w')
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