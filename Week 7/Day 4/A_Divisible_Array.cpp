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
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i * 2 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}