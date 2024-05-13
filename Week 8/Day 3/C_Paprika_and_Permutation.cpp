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
        vector<long long int> v;
        set<long long int> st;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if ((x <= n) && (!st.count(x)))
            {
                st.insert(x);
            }
            else
            {
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        long long int cnt = v.size();
        long long int indx = 0;
        for (int i = 1; i <= n; i++)
        {
            if (st.count(i) != 0)
            {
                continue;
            }
            if (v[indx] <= 2 * i)
            {
                cnt = -1;
                break;
            }
            indx++;
        }
        cout << cnt << "\n";
    }
}