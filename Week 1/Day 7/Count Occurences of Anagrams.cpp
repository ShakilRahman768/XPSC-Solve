class Solution
{
public:
    int search(string pat, string txt)
    {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char x : pat)
        {
            freq1[x - 97]++;
        }

        int l = 0, r = 0, ans = 0;
        while (r < txt.size())
        {
            freq2[txt[r] - 97]++;
            if (r - l + 1 == pat.size())
            {
                if (freq1 == freq2)
                {
                    ans++;
                }
                freq2[txt[l] - 97]--;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};