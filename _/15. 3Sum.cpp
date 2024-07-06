#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;
using ll = long long;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[left] + nums[right] + nums[i];
                if (sum == 0)
                {
                    s.insert({nums[left], nums[right], nums[i]});
                    left++;
                    right--;
                }
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
        }
        for (auto t : s)
            ans.push_back(t);

        return ans;
    }
};

int main()
{
    vector<int> v = {-2, 0, 1, 1, 2};
    Solution s = Solution();
    DisplayMap(s.threeSum(v));
    return 0;
}