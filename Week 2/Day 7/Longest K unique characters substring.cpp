class Solution
{
public:
    int longestKSubstr(string s, int k)
    {

        long long int l = 0, r = 0, n = s.size(), ans = -1;
        map<char, int> freq;

        while (r < n)
        {
            freq[s[r]]++;
            while (freq.size() > k)
            {
                freq[s[l]]--;
                if (freq[s[l]] == 0)
                {
                    freq.erase(s[l]);
                }
                l++;
            }
            if (freq.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        return ans;
    }
};