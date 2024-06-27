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
        int n, x;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        int cnt1 = 0, cnt2 = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                cnt1++;
                cnt2++;
            }
            else
            {
                if (cnt1 > cnt2)
                {
                    cnt2++;
                }
                else
                {
                    cnt1++;
                }
            }
        }
        cnt2++;
        cout << min(cnt1, cnt2) << "\n";
    }
    return 0;
}