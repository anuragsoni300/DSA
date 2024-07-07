#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;

using ll = long long;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode();
        ListNode *d = ans;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                ListNode *temp = new ListNode(l1->val);
                ans->next = temp;
                l1 = l1->next;
            }
            else
            {
                ListNode *temp = new ListNode(l2->val);
                ans->next = temp;
                l2 = l2->next;
            }
            ans = ans->next;
        }
        while (l1)
        {
            ans->next = l1;
            ans = ans->next;
            l1 = l1->next;
        }
        while (l2)
        {
            ans->next = l2;
            ans = ans->next;
            l2 = l2->next;
        }
        return d->next;
    }
};

int main()
{
    Solution s = Solution();

    cout << endl;
    return 0;
}
