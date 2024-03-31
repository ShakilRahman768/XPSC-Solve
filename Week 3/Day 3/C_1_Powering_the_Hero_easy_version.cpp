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
        long long int n, sum = 0;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                v.push_back(arr[i]);
            }
            else
            {
                if (!v.empty())
                {
                    sort(v.begin(), v.end());
                    sum = sum + v.back();
                    v.pop_back();
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}