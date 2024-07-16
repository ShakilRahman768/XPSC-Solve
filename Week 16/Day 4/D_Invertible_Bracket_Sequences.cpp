#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int arr[200010];
        ll t = 0, ans = 0;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                t += 1;
            }
            else
            {
                t -= 1;
            }
            ans += arr[t];
            arr[t]++;
            if (t > 0)
            {
                arr[(t - 1) / 2] = 0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}