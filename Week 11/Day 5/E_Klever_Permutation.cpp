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
        int n, k;
        cin >> n >> k;
        int arr[n];
        int l = 1, r = n;
        for (int i = 0; i < k; i++)
        {
            for (int j = i; j < n; j = j + k)
            {
                if (j % 2)
                {
                    arr[j] = l;
                    l = l + 1;
                }
                else
                {
                    arr[j] = r;
                    r = r - 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}