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
        cin >> n;
        vector<int> v(10, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = x % 10;
            v[x]++;
        }
        vector<int> v1;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < min(v[i], 3); j++)
            {
                v1.push_back(i);
            }
        }
        int flag = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = i + 1; j < v1.size(); j++)
            {
                for (int k = j + 1; k < v1.size(); k++)
                {
                    int s = v1[i] + v1[j] + v1[k];
                    if (s % 10 == 3)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}