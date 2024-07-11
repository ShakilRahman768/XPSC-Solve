#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, flag = 1;
    cin >> n >> k;
    string s;
    cin >> s;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == i)
            {
                s.erase(j, 1);
                j--;
                k--;
            }
            if (k == 0)
            {
                cout << s << "\n";
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    return 0;
}