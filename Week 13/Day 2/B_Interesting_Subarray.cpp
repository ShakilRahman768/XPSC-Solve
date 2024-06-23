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
        int n, flag = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] - v[i - 1]) >= 2)
            {
                cout << "YES" << "\n";
                cout << i << " " << i + 1 << "\n";
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}