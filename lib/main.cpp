#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution
{
public:
    int sell(int a, int b = 0)
    {
        return a + b;
    }

    int buy(int a, int b = 0)
    {
        return a - b;
    }

    void dp(set<int> &max_profits, const vector<int> &arr, int profit, int i, bool &selling)
    {
        if (profit < 0)
        {
            return;
        }
        if (i >= arr.size())
        {
            max_profits.insert(profit);
            return;
        }

        if (selling)
        {
            selling = false;
            dp(max_profits, arr, sell(profit, arr[i]), i + 1, selling);
            selling = true;
            dp(max_profits, arr, buy(profit), i + 1, selling);
        }
        else
        {
            selling = true;
            dp(max_profits, arr, buy(profit, arr[i]), i + 1, selling);
            selling = false;
            dp(max_profits, arr, sell(profit), i + 1, selling);
        }
    }

    int histMaxProfit(const std::vector<int> &arr)
    {
        set<int> max_profits;
        bool selling = true;
        dp(max_profits, arr, 0, 0, selling);
        return *max_element(max_profits.begin(), max_profits.end()) % 1000000000;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> arr = {5, 4, 3, 2}; // Example input
    cout << "Max Profit: " << s.histMaxProfit(arr) << std::endl;
    return 0;
}
