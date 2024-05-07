#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n, int m, string s1, string s2, int mid)
{
    for (int i = 0; i < mid; i++)
    {
        s1[arr[i] - 1] = '1';
    }
    int j = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        if (j == m)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (check(arr, n, m, s1, s2, mid) == 1)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}