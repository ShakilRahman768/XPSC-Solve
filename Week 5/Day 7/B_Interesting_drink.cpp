#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int q;
    cin >> q;
    while (q--)
    {
        int v;
        cin >> v;
        auto it = upper_bound(arr, arr + n, v);
        cout << it - arr << endl;
    }
}