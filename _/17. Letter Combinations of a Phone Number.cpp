#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;

#define ll long long;

class Solution
{
public:
    vector<string> letterCombinations(string d)
    {
        digit = d;
        backtrack(0, "");
        return ans;
    }

private:
    vector<string> ans = {};
    string digit;
    unordered_map<int, string> m =
        {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}};
    void backtrack(int i, string cur)
    {
        if (digit == "")
            return;
        else if (cur.size() == digit.size())
        {
            ans.push_back(cur);
            return;
        }
        else
        {
            for (char c : m[digit[i] - '0'])
                backtrack(i + 1, cur + c);
        }
    }
};

int main()
{
    Solution s = Solution();
    vector<string> a = s.letterCombinations("2647");
    for (auto ch : a)
        cout << ch << "::";
    cout << endl;
    return 0;
}
