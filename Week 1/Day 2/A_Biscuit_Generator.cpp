#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t, cnt = 0, ans = 0;
    cin >> a >> b >> t;
    cnt = a;
    while (cnt <= t)
    {
        ans = ans + b;
        cnt = cnt + a;
    }
    cout << ans << "\n";
    return 0;
}