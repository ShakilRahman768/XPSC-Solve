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
        long long int n, sum;
        cin >> n;
        sum = n;
        while (n > 0)
        {
            sum = sum + n / 2;
            n = n / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}