#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int flag = 1;
    while (b >= c)
    {
        if (a <= c && c <= b)
        {
            cout << c << "\n";
            flag = 0;
            break;
        }
        c = c + c;
    }
    if (flag == 1)
    {
        cout << -1 << "\n";
    }
    return 0;
}