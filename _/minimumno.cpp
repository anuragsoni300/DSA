#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution
{
public:
    int ss(vector<int> &A)
    {
        sort(A.begin(), A.end());
        long unsigned int i = 0;
        int j = 1;
        if(j>A[A.size()-1]) return j;
        while (i < A.size())
        {
            if (j < A[i])
                return j;
            j = A[i] + 1;
            i++;
        }
        return j;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> v = {-1,-2};
    cout<<s.ss(v)<<endl;
    return 0;
}
