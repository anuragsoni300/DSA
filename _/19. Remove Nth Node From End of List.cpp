#include <bits/stdc++.h>
#include "utils/common.h"
using namespace std;

#define ll long long;

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* prev = temp;
        int i = 0, j = 0;
        for (; temp->next != nullptr; i++) temp = temp->next;
        i -= (n - 1);
        temp = head;
        while (temp != nullptr) {
            if (i == 0)
                return temp->next;
            if (j == i) {
                prev->next = temp->next;
                break;
            }
            j++;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};

int main()
{
    Solution s = Solution();

    cout << endl;
    return 0;
}
