#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;
using ll = long long;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int maxC = INT_MAX;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[left] + nums[right] + nums[i];
                if (abs(sum - target) < maxC)
                {
                    maxC = abs(sum - target);
                    ans = sum;
                }
                if (sum == target)
                    return sum;
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> v = {-1, 2, 1, -4};
    Solution s = Solution();
    cout << s.threeSumClosest(v, 1) << endl;
    return 0;
}