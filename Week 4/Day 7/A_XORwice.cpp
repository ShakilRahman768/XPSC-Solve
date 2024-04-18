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
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << ((a ^ a) ^ (b ^ a)) << "\n";
        }
        else
        {
            cout << ((a ^ b) ^ (b ^ b)) << "\n";
        }
    }
    return 0;
}