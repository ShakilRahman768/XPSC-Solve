#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
                ans++;
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    if (ans % 2)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    return 0;
}