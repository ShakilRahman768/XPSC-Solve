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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    while (arr[i] % j == 0)
                    {
                        cnt[j]++;
                        arr[i] /= j;
                    }
                }
            }
            if (arr[i] > 1)
            {
                cnt[arr[i]]++;
            }
        }
        int flag = 1;
        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}