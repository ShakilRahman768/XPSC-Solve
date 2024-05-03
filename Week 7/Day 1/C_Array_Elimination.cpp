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
        int brr[30] = {0};
        int num;
        for (int i = 0; i < 30; i++)
        {
            num = (1ll << i);
            for (int j = 0; j < n; j++)
            {
                if ((arr[j] & num) != 0)
                {
                    brr[i]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int flag = 0;
            for (int j = 0; j < 30; j++)
            {
                if ((brr[j] % i) != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}