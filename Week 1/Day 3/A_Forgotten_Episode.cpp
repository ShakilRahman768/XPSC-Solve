#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, flag = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << "\n";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << "\n";
    }
    return 0;
}