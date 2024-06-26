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
        ll n;
        cin >> n;
        vector<ll> v;
        ll a = 0;
        v.push_back(n);
        for (int i = 0; i < 32; i++)
        {
            if (n & (1 << i))
            {
                if (n == (1 << i))
                {
                    a = i;
                    break;
                }
                n -= (1 << i);
                v.push_back(n);
            }
        }
        while (a > 0)
        {
            n -= (1 << (a - 1));
            v.push_back(n);
            a--;
        }
        cout << v.size() << "\n";
        for (auto &i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}