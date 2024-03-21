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
        vector<string> v[3];
        vector<int> c(3);
        map<string, int> freq;

        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                v[i].push_back(x);
                freq[x]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (string s : v[i])
            {
                if (freq[s] == 1)
                {
                    c[i] += 3;
                }
                else if (freq[s] == 2)
                {
                    c[i] += 1;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}