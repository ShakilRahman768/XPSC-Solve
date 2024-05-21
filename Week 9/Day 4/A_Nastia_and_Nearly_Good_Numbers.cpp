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
        long long int a, b, c, sum;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            sum = (a * b * 2);
            c = sum - a;
            cout << a << " " << c << " " << sum << "\n";
        }
    }
}