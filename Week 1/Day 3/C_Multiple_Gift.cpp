#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x, y;
    cin >> x >> y;
    long long int i = x;
    long long int cnt = 0;
    while (i <= y)
    {
        i = i * 2;
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}