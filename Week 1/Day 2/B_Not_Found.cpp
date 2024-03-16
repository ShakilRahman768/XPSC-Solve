#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt[26] = {0};
    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int a = int(s[i]) - 97;
        cnt[a]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
        {
            char c = char(i + 97);
            cout << c << "\n";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "None"
             << "\n";
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << cnt[i] << " ";
    // }
    return 0;
}