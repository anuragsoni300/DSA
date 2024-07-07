#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;

using ll = long long;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        l = n;
        backtrack(0, 0, "");
        return ans;
    }

private:
    vector<string> ans = {};
    int l = 0;
    void backtrack(int open, int close, string cur)
    {
        if (cur.size() == 2 * l)
        {
            cout << cur << endl;
            ans.push_back(cur);
            return;
        }
        if (open < l)
            backtrack(open + 1, close, cur + "(");
        if (close < open)
            backtrack(open, close + 1, cur + ")");
    }
};

int main()
{
    Solution s = Solution();
    vector<string> t = s.generateParenthesis(3);
    cout << endl;
    return 0;
}
