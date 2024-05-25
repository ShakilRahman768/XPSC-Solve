#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, r;
    cin >> s;
    vector<int> v(26);
    for (char c : s)
    {
        v[c - 'A']++;
    }
    int c = 0;
    for (int i = 0; i < 26; i++)
    {
        c += (v[i] % 2);
    }
    if (c > 1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!(v[i] % 2))
        {
            for (int j = 0; j < v[i] / 2; j++)
                r.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % 2)
        {
            for (int j = 0; j < v[i]; j++)
            {
                r.push_back(i + 'A');
            }
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (!(v[i] % 2))
        {
            for (int j = 0; j < v[i] / 2; j++)
            {
                r.push_back(i + 'A');
            }
        }
    }
    cout << r << "\n";
    return 0;
}