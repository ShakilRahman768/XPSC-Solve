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
        ll n;
        cin >> n;
        ll arr[n], flag = 1;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] != n)
        {
            cout << "NO" << "\n";
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                while (v.size() < arr[i])
                {
                    v.push_back(i + 1);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != v[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}