#include <bits/stdc++.h>
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
        string s, s2 = "";
        cin >> s;
        int a = 0, b1 = 0, b2 = 0;
        for (char c : s)
        {
            if (a == 0 && c == '0')
            {
                s2 += c;
                b1++;
                a = 1;
            }
            if (c == '1')
            {
                s2 += c;
                a = 0;
                b2++;
            }
        }
        if (b1 >= b2)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }
    return 0;
}