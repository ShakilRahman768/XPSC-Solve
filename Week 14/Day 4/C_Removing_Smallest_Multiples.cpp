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
        string s;
        cin >> s;
        vector<ll> v(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v[i + 1] = 1;
            }
        }
        long long int sum = 0;
        for (int i = 1; i < n + 1; i++)
        {
            if (v[i] == 0)
            {
                for (int j = i; j < n + 1; j += i)
                {
                    if (v[j] == 0)
                    {
                        sum += i;
                        v[j] = -1;
                    }
                    else if (v[j] == 1)
                    {
                        break;
                    }
                }
            }
            else if (v[i] == -1)
            {
                for (int j = i; j < n + 1; j += i)
                {
                    if (v[j] == 0)
                    {
                        sum += i;
                        v[j] = -1;
                    }
                    else if (v[j] == 1)
                    {
                        break;
                    }
                }
            }
        }
        cout << sum << "\n";
    }
}