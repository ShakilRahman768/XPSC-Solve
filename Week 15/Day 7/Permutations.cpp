class Solution
{
private:
    void prmtn(vector<int> &nums, vector<int> &e, vector<vector<int>> &v,
               int freq[])
    {
        if (nums.size() == e.size())
        {
            v.push_back(e);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq[i] == 0)
            {
                e.push_back(nums[i]);
                freq[i] = 1;
                prmtn(nums, e, v, freq);
                freq[i] = 0;
                e.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> v;
        vector<int> e;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            freq[i] = 0;
        }
        prmtn(nums, e, v, freq);
        return v;
    }
};