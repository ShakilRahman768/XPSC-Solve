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
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        string ns1 = s1, ns2 = s2;
        while (n != m)
        {
            if (n > m)
            {
                ns2 += s2;
                m = ns2.length();
            }
            else
            {
                ns1 += s1;
                n = ns1.length();
            }
        }
        if (ns1 == ns2)
        {
            cout << ns1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}