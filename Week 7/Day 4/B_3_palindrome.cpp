#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (j > 4)
        {
            j = 1;
        }
        if (j == 1)
        {
            s.append("a");
            j++;
        }
        else if (j == 2)
        {
            s.append("b");
            j++;
        }
        else if (j == 3)
        {
            s.append("b");
            j++;
        }
        else if (j == 4)
        {
            s.append("a");
            j++;
        }
    }
    cout << s << "\n";
    return 0;
}