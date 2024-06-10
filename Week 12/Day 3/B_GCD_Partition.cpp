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
        vector<long long int> v(n);
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        long long int c = 0, mx = LONG_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            c += v[i];
            sum -= v[i];
            mx = max(mx, __gcd(c, sum));
        }
        cout << mx << "\n";
    }
    return 0;
}