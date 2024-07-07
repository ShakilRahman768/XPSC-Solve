#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int flag = 1;
    if (s.length() != t.length())
    {
        flag = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (t[i] != 'a' && t[i] != 'e' && t[i] != 'o' && t[i] != 'i' && t[i] != 'u')
            {
                flag = 0;
            }
        }
        if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u')
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    return 0;
}