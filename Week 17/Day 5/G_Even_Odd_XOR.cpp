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
        vector<int> v(n);
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n - 2; i++)
        {
            x ^= i;
            y ^= (i + 1);
        }
        int r = 0;
        if (x == 0)
        {
            r++;
        }
        for (int i = 0; i < n - 2; i++)
        {
            v[i] = i + r;
            z ^= v[i];
        }
        v[n - 2] = (1 << 30);
        v[n - 1] = (v[n - 2] ^ z);
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}