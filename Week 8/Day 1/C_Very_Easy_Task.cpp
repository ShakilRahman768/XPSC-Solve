#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int check(int x, int y, int mid)
{
    int cnt = 0;
    cnt += (mid / x);
    cnt += (mid / y);
    cnt += 1;
    if (cnt >= n)
    {
        return 1;
    }
    return 0;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> x >> y;
    long long int l = 0, r = max(x, y) * n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(x, y, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans + min(x, y) << '\n';
    return 0;
}