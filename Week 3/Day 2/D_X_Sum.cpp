#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[205][205];
int mx(int i, int j)
{
    int sum = 0;
    sum = sum + arr[i][j];
    int i1 = i - 1, j1 = j - 1;
    while (i1 >= 0 && j1 >= 0)
    {
        sum = sum + arr[i1][j1];
        i1--;
        j1--;
    }
    i1 = i - 1, j1 = j + 1;
    while (i1 >= 0 && j1 < m)
    {
        sum = sum + arr[i1][j1];
        i1--;
        j1++;
    }
    i1 = i + 1, j1 = j - 1;
    while (i1 < n && j1 >= 0)
    {
        sum = sum + arr[i1][j1];
        i1++;
        j1--;
    }
    i1 = i + 1, j1 = j + 1;
    while (i1 < n && j1 < m)
    {
        sum = sum + arr[i1][j1];
        i1++;
        j1++;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int ans = INT_MIN;
        cin >> n >> m;
        int brr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                brr[i][j] = mx(i, j);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ans < brr[i][j])
                {
                    ans = brr[i][j];
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}