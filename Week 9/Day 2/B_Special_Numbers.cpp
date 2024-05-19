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
        long long int n, k;
        cin >> n >> k;
        long long int r = 0, c = 1, mod = 1e9 + 7;
        while (k)
        {
            if (k % 2)
            {
                r += c;
                r %= mod;
            }
            c *= n;
            c %= mod;
            k /= 2;
        }
        cout << r << "\n";
    }
}