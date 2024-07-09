#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    long long int sum = 0, i = 1;
    while (1)
    {
        sum += i;
        if (sum - k + i == n)
        {
            break;
        }
        i++;
    }
    cout << sum - k << "\n";
    return 0;
}