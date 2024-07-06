#include <bits/stdc++.h>
using namespace std;

#define ll long long;

class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0, sign = 1, num = 0;
        while (s[i] == ' ')
            i++;
        if (s[i] == '+' || s[i] == '-')
        {
            sign = s[i++] == '+' ? 1 : -1;
        }
        while (i < s.size() && isdigit(s[i]))
        {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
                return sign == -1 ? INT_MIN : INT_MAX;
            num = num * 10 + (s[i++] - '0');
        }
        return num * sign;
    }
};

int main()
{
    Solution s = Solution();
    // cout << INT_MIN;
    cout << s.myAtoi("-91283472332") << endl;
    return 0;
}
