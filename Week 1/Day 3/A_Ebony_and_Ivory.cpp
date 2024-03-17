#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, flag = 1;
    cin >> a >> b >> c;
    for (int i = 0; i <= 10000; i++)
    {
        if (flag == 0)
        {
            break;
        }
        for (int j = 0; j <= 10000; j++)
        {
            if ((a * i + b * j) == c)
            {
                cout << "Yes"
                     << "\n";
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "No"
             << "\n";
    }
    return 0;
}