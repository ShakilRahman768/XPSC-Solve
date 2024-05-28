#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long int> v(n);
    long long int a, p = 0;
    v[p] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        p = p + a;
        v[(p % n + n) % n]++;
    }
    long long int ans = 0;
    for (long long int x : v)
    {
        ans = ans + (x * (x - 1) / 2);
    }
    cout << ans << "\n";
}