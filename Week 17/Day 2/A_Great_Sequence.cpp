#include <bits/stdc++.h>
#define ll long long int
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
        cin >> n >> x;
        multiset<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            st.insert(a);
        }
        ll ans = 0;
        while (!st.empty())
        {
            ll mn = *st.begin();
            if (st.count(x * mn))
            {
                st.erase(st.find(x * mn));
            }
            else
            {
                ans++;
            }
            st.erase(st.find(mn));
        }
        cout << ans << "\n";
    }
    return 0;
}