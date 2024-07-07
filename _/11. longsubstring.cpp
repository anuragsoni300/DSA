#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;
        vector<int> v(256, -1);
        int left = 0, maxC = 0;
        for (int right = 0; right < s.size(); right++)
        {
            // if(m.count(s[right]) == 0 || m[s[right]] < left) maxC = max(maxC, right - left + 1);
            // else left = m[s[right]]+1;
            // m[s[right]] = right;
            if (v[s[right]] >= left)
                left = v[s[right]] + 1;
            v[s[right]] = right;
            maxC = max(maxC, right - left + 1);
        }
        return maxC;
    }
};

int main()
{
    Solution s = Solution();
    cout << s.lengthOfLongestSubstring("anurag") << endl;
    return 0;
}
