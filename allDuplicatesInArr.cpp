// solution 1 //correct but gives tle
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        vector<int> ans;

        sort(begin(nums), end(nums));
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] ^ nums[j]) == 0)
                {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};
// solution 2 //correct but gives tle

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] != nums[j])
                {
                    continue;
                }
                else
                {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};

// no tle

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return {};
        vector<int> ans;
        sort(begin(nums), end(nums));
        int s = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (!(s ^ nums[i]))
            {
                ans.push_back(nums[i]), i += 1;
                if (i < nums.size())
                    s = nums[i];
                else
                    break;
            }
            else
                s = nums[i];
        }
        return ans;
    }
};