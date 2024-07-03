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
        string s;
        cin >> s;
        int c, sum = INT_MAX;
        for (int i{0}; i < n - 1; i++)
        {
            c = ((s[i] - '0') * 10 + s[i + 1] - '0');
            for (int j{0}; j < n; j++)
            {
                if (j != i && j != i + 1)
                {
                    c = min(c + (s[j] - '0'), c * (s[j] - '0'));
                }
            }
            sum = min(sum, c);
        }
        cout << sum << "\n";
    }
}