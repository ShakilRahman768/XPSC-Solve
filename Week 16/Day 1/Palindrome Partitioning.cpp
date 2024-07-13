class Solution
{
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }

    void f(int idx, vector<vector<string>> &v, vector<string> &e, string &s,
           int n)
    {
        if (idx == n)
        {
            v.push_back(e);
            return;
        }
        for (int i = idx; i < n; i++)
        {
            if (isPalindrome(s, idx, i))
            {
                e.push_back(s.substr(idx, i - idx + 1));
                f(i + 1, v, e, s, n);
                e.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> v;
        vector<string> e;
        int n = s.size();
        f(0, v, e, s, n);
        return v;
    }
};