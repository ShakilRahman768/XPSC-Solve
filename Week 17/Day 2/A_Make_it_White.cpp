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
        int l = 0, r = n - 1, cnt = 0;
        while (l < r)
        {
            if (s[l] == 'B' && s[r] == 'B')
            {
                break;
            }
            if (s[l] == 'W')
            {
                l++;
                cnt++;
            }
            if (s[r] == 'W')
            {
                r--;
                cnt++;
            }
        }
        cout << n - cnt << "\n";
    }
    return 0;
}