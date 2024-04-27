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
        long long int n, k, a, b, ans;
        cin >> n >> k;
        a = k / (n - 1);
        b = k % (n - 1);
        ans = n * a + b;
        if (b == 0)
        {
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}