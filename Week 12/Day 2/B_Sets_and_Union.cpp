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
        vector<set<int>> v;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            set<int> st2;
            int k;
            cin >> k;
            for (int i = 0; i < k; i++)
            {
                int x;
                cin >> x;
                st2.insert(x);
                st.insert(x);
            }
            v.push_back(st2);
        }
        int mx = INT_MIN;
        for (auto it : st)
        {
            set<int> st3;
            for (int i = 0; i < n; i++)
            {
                auto p = v[i].find(it);
                if (p == v[i].end())
                {
                    for (auto it : v[i])
                    {
                        st3.insert(it);
                    }
                }
            }
            int n = st3.size();
            mx = max(mx, n);
        }
        cout << mx << "\n";
    }
}