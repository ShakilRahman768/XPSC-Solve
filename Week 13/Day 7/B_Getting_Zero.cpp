#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0;
    cin >> n;
    int m = 32768;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        int mn = INT_MAX;
        for (int j = 0; j <= 15; j++)
        {
            for (int k = 0; k <= 15; k++)
            {
                if ((x + j) * (int)pow(2, k) % m == 0)
                {
                    mn = min(mn, k + j);
                }
            }
        }
        cout << mn << " ";
    }
    cout << "\n";
    return 0;
}