#include <bits/stdc++.h>
using namespace std;
int mn = (1 << 15);
vector<int> v;
void mark_palindrome()
{
    for (int i = 0; i < mn; i++)
    {
        string s = to_string(i);
        int len = s.length();
        int flag = 1;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(mn), a;
        long long int ans = n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                int cur = (a[i] ^ v[j]);
                ans = ans + cnt[cur];
            }
        }
        ans = ans / 2;
        cout << ans << '\n';
    }
    return 0;
}