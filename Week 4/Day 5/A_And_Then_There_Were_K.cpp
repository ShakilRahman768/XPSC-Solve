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
        long long int n, i = 1;
        cin >> n;
        while (i <= n)
        {
            i = i * 2;
        }
        cout << (i / 2) - 1 << "\n";
    }
    return 0;
}