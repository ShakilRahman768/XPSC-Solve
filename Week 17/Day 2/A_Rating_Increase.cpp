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
        string s, s1, s2;
        cin >> s;
        s1 += s[0];
        int flag = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '0' && flag == 0)
            {
                s1 += s[i];
            }
            else
            {
                flag = 1;
            }
            if (flag == 1)
            {
                s2 += s[i];
            }
        }
        if (s2 == "")
        {
            cout << -1 << "\n";
        }
        else
        {
            int a = stoi(s1);
            int b = stoi(s2);
            if (a != b && a < b)
            {
                cout << a << " " << b << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}