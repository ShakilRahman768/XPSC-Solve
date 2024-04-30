#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long int> v;
    for (int i = 1; i <= 10000; i++)
    {
        v.push_back(pow(i, 3));
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        int flag = 0;

        for (int i = 0; i < 10000; i++)
        {
            if (v[i] >= x)
            {
                break;
            }
            int l = 0, r = 10000 - 1, mid;
            long long int n = x - v[i];
            int ok = 0;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (v[mid] == n)
                {
                    ok = 1;
                    break;
                }
                else if (v[mid] > n)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}