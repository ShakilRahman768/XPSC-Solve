#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int arr[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            v.push_back(arr[i]);
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}