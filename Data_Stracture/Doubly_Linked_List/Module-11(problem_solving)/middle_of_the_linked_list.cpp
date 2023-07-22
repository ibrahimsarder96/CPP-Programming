#include<bits/stdc++.h>
using namespace std;
class ListNode{
  public:
        int val;
        ListNode* next;
        ListNode(int val){
          this->val=val;
          this-> next = NULL;
        }
};
ListNode* middleNode(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  cout<<slow->val;
  return slow;
}
main()
{
  
  return 0;
}

// fast way problem solve-------------
class Solution {
public:
    int size(ListNode*  head){
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode* tmp = head;
        for(int i = 0; i < sz/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};