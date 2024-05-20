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
        long long int n, k;
        cin >> n >> k;
        long long int sum = n * (n + 1) / 2;
        long long int cr = 0;
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            long long int c;
            cin >> c;
            v.push_back(c);
            cr += c;
        }
        v.push_back(sum - cr);
        k = k % (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << v[(i - k + n + 1) % (n + 1)] << " ";
        }
        cout << "\n";
    }
}