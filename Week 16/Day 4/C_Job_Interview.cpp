#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll cnt1 = 0, cnt2 = 0, sum1 = 0, sum2 = 0;
        int p = -1;
        int q = n + m + 1;
        vector<int> v1(q), v2(q);
        for (int i = 0; i < q; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> v2[i];
        }
        for (int i = 0; i < q; i++)
        {
            if (v1[i] > v2[i])
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        if (cnt2 > m)
        {
            swap(v1, v2);
            swap(n, m);
        }
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < q; i++)
        {
            if (v1[i] > v2[i])
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
            if (cnt1 == n + 1 && p == -1)
            {
                p = i;
                continue;
            }
            if (v2[i] > v1[i] || cnt1 > n + 1)
            {
                sum2 += v2[i];
            }
            else
            {
                sum1 += v1[i];
            }
        }
        for (int i = 0; i < q; i++)
        {
            ll val = sum1 + sum2;
            if (v1[i] > v2[i] && i <= p)
            {
                val -= v1[i];
                val += v1[p];
                cout << val << " ";
            }
            else
            {
                val -= v2[i];
                val += v2[p];
                cout << val << " ";
            }
        }
        cout << "\n";
    }
}