#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int i, j, k, m = 0;
    for (i = 1; i <= n - 1; i++)
    {
        j = a / i;
        k = b / (n - i);
        if (j >= 1 && k >= 1)
        {
            m = max(m, min(j, k));
        }
    }
    cout << m << "\n";
    return 0;
}