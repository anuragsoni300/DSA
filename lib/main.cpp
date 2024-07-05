#include <bits/stdc++.h>
using namespace std;

#define ll long long;

class Solution
{
public:
    string ans;
    int longestPalindrome(string s)
    {
        int maxC = 0;
        for (int i = 0; i < s.size(); i++)
        {
            pallindrome(i, i, &maxC, &s);     // Odd
            pallindrome(i, i + 1, &maxC, &s); // Even
        }
        return maxC;
    }

    void pallindrome(int left, int right, int *maxC, string *s)
    {
        while (left >= 0 && right < (*s).size())
        {
            if ((*s)[left] == (*s)[right])
            {
                if (*maxC < right - left + 1)
                {
                    ans = (*s).substr(left, right + 1);
                    *maxC = right - left + 1;
                }
            }
            else
                break;
            left--;
            right++;
        }
    }
};

int main()
{
    Solution s = Solution();
    cout << s.longestPalindrome("aaaa") << "::" << s.ans << endl;
    return 0;
}
