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
        int n, c = 0;
        cin >> n;
        map<int, int> mp;
        int arr[1005];
        for (int i = 0; i < n; i++)
        {
            int a, j;
            cin >> a;
            for (j = 2; j <= a; j++)
            {
                if (a % j == 0)
                {
                    break;
                }
            }
            if (mp.find(j) == mp.end())
            {
                mp[j] = c;
                c++;
            }
            arr[i] = mp[j];
        }
        cout << c << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] + 1 << " ";
        }
        cout << '\n';
        mp.clear();
    }
    return 0;
}