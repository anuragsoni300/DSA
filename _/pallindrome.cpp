#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        ll num = 0;
        int temp = x;
        if (x < 0)
            return false;
        while (x != 0)
        {
            num = num * 10 + x % 10;
            x /= 10;
        }
        return num == temp ? true : false;
    }
};

int main()
{
    Solution s = Solution();
    cout << s.isPalindrome(12321) << endl;
    return 0;
}
