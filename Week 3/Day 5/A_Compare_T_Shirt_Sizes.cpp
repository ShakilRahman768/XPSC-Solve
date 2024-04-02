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
        int l1, l2;
        cin >> s1 >> s2;
        l1 = s1.length() - 1;
        l2 = s2.length() - 1;
        if (s1[l1] == 'S')
        {
            if (s2[l2] == 'S')
            {
                if (l1 < l2)
                {
                    cout << ">"
                         << "\n";
                }
                else if (l1 > l2)
                {
                    cout << "<"
                         << "\n";
                }
                else
                {
                    cout << "="
                         << "\n";
                }
            }
            else
            {
                cout << "<"
                     << "\n";
            }
        }

        else if (s1[l1] == 'M')
        {
            if (s2[l2] == 'S')
            {
                cout << ">"
                     << "\n";
            }
            else if (s2[l2] == 'L')
            {
                cout << "<"
                     << "\n";
            }
            else
            {
                cout << "="
                     << "\n";
            }
        }

        else if (s1[l1] == 'L')
        {
            if (s2[l2] == 'L')
            {
                if (l1 < l2)
                {
                    cout << "<"
                         << "\n";
                }
                else if (l1 > l2)
                {
                    cout << ">"
                         << "\n";
                }
                else
                {
                    cout << "="
                         << "\n";
                }
            }
            else
            {
                cout << ">"
                     << "\n";
            }
        }
    }
    return 0;
}