#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x, y, a, b;
    cin >> x >> y;
    a = y * log(x);
    b = x * log(y);
    if (a == b)
    {
        cout << "=" << "\n";
    }
    else if (a > b)
    {
        cout << ">" << "\n";
    }
    else if (a < b)
    {
        cout << "<" << "\n";
    }
    return 0;
}