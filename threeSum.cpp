#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == target)
                    {
                        return {i, j, k};
                    }
                }
            }
        }
        return {};
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 9;
    vector<int> ans = s.twoSum(arr, target);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}
