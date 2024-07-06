#include <bits/stdc++.h>
using namespace std;

#define ll long long;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Node {
public:
  int val;
  Node *next;
};

void Display(Node *head) {
  while (head != NULL) {
    cout << head->val << "->";
    head = head->next;
  }
  cout << endl;
}

void insertNode(int val, Node **head) {
  Node *temp = new Node();
  temp->val = val;
  temp->next = *head;
  *head = temp;
}

int main() {
  Node *myList = NULL;
  insertNode(5, &myList);
  insertNode(4, &myList);
  insertNode(3, &myList);
  insertNode(2, &myList);
  Display(myList);
  return 0;
}
