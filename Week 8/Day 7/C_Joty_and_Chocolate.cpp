#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    long long int x = __gcd(a, b);
    return x;
}
long long int lcm(long long int a, long long int b)
{
    long long int x = ((a / gcd(a, b)) * b);
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, a, b, p, q, ans = 0, op;
    cin >> n >> a >> b >> p >> q;
    ans = ans + ((n / a) * p) + ((n / b) * q);
    op = (n / lcm(a, b));
    ans = ans - (op * (p + q));
    ans = ans + (op * max(p, q));
    cout << ans << '\n';
    return 0;
}