#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, s;
    cin >> n >> s;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int l = 0, r = 0, ans = 0;
    map<long long int, long long int> freq;
    while (r < n)
    {
        freq[arr[r]]++;
        if (freq.size() <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (freq.size() > s)
            {
                freq[arr[l]]--;
                if (freq[arr[l]] == 0)
                {
                    freq.erase(arr[l]);
                }
                l++;
            }
            if (freq.size() <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << "\n";
    return 0;
}