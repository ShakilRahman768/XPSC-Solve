#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll brr[n];
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = -1;
            for (int j = i + 2; j >= 2; j--)
            {
                if (arr[i] % j != 0)
                {
                    brr[i] = i + 2 - j;
                    break;
                }
            }
            if (brr[i] == -1)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}