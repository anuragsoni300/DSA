#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxC = 0;
        int i = 0, j = height.size() - 1;
        while (i < j)
        {
            int th = min(height[i], height[j]);
            maxC = max(maxC, th * (j - i));
            // cout << height[i] << "::" << height[j] << "::" << i << ":" << j << ":::" << maxC << endl;
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxC;
    }
};

int main()
{
    vector<int> h = {1,10,1,1,1};
    Solution s = Solution();
    cout << s.maxArea(h) << endl;
    return 0;
}