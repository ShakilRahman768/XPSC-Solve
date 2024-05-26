#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int psum = 0, ans = 0;
    map<long long, int> mp;
    mp[0] = 1;
    for (int a : v)
    {
        psum += a;
        ans += mp[psum - x];
        mp[psum]++;
    }
    cout << ans << "\n";
}