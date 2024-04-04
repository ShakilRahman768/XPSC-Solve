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
        string s;
        cin >> n;
        cin >> s;
        long long int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                int x = (n - 1 - i) - i;
                v.push_back(x);
                sum = sum + i;
            }
            else if (s[i] == 'R')
            {
                int x = i - (n - 1 - i);
                v.push_back(x);
                sum = sum + n - 1 - i;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                sum = sum + v[i];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}