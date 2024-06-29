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
        string a, b;
        cin >> a >> b;
        int mx = INT_MIN;
        for (int i = 0; i < b.length(); i++)
        {
            int cnt = 0, k = i;
            for (int j = 0; j < a.length(); j++)
            {
                if (b[k] == a[j])
                {
                    cnt++;
                    k++;
                }
            }
            if (cnt > mx)
            {
                mx = cnt;
            }
        }
        cout << a.length() + (b.length() - mx) << "\n";
    }
    return 0;
}