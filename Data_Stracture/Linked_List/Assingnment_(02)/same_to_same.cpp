#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* next;
        Node(int val){
          this->val=val;
          this-> next = NULL;
        }
};
// insert head and tail-----------------
void insert_head_tail(Node *&head, Node* &tail, int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
}
// length count then print-------------
void countLength(Node* &head1, Node* &head2){
  int cnt1 = 0;
  int cnt2 = 0;
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  while(tmp1 != NULL){
    cnt1++;
    tmp1=tmp1->next;
  }
  while(tmp2 != NULL){
    cnt2++;
    tmp2=tmp2->next;
  }
  if(cnt1 == cnt2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
} 

main()
{
  Node* head1 = NULL;
  Node* head2 = NULL;
  Node* tail = NULL;
  int val1;
  while(true){
    cin>>val1;
    if(val1 == -1){
      break;
    } 
    insert_head_tail(head1,tail,val1);
  }
  int val2;
  while(true){
    cin>>val2;
    if(val2 == -1){
      break;
    } 
     insert_head_tail(head2,tail,val2);
  }
  countLength(head1, head2);
  return 0;
}