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
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        vector<long long int> ans;
        for (int i = 0; i < 26; i++)
        {
            ans.push_back(1e18);
        }
        for (char a : st)
        {
            int l = 0;
            int r = n - 1;
            long long int c = 0;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == a)
                    {
                        l++;
                        c++;
                    }
                    else if (s[r] == a)
                    {
                        r--;
                        c++;
                    }
                    else
                    {
                        c = -1;
                        break;
                    }
                }
            }
            if (c != -1)
            {
                ans[a - 'a'] = c;
            }
        }
        sort(ans.begin(), ans.end());
        if (ans[0] == 1e18)
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << ans[0] << "\n";
        }
    }
    return 0;
}