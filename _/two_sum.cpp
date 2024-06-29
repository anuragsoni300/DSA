#include <bits/stdc++.h>
using namespace std;

#define ll long long;

class Solution
{
public:
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans;

    void solve(vector<int> nums, int target)
    {
        sort(nums.begin(), nums.end());
        int sum = 0, i = 0, j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] == target)
                break;
            else if (nums[i] + nums[j] < target)
                i++;
            else
                j--;
        }
        for (int k = 0; k < nums.size(); k++)
        {
            if (nums[i] == nums[k] || nums[j] == nums[k])
            {
                ans.push_back(nums[k]);
                cout << nums[k] << " ";
            }
        }
    }
};

int main()
{
    Solution s = Solution();
    s.solve(s.arr, s.target);
    return 0;
}
