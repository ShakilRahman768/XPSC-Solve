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
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int cnt = 0, a = 1;
            for (int i = n - 2; i >= 0; i--)
            {
                if (arr[i] != arr[n - 1])
                {
                    i = i - a + 1;
                    cnt++;
                    a = a * 2;
                }
                else
                {
                    a++;
                }
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}