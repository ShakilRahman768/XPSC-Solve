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
        int n, flag = 1;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll v1 = 0, v2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            v1 = __gcd(v1, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            v2 = __gcd(v2, v[i]);
        }

        bool ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % v2 == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << v2 << "\n";
        }
        else
        {
            flag = 1;
            for (int i = 1; i < n; i += 2)
            {
                if (v[i] % v1 == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << v1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}