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

void print_normal(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp = tmp->next;
    return;
  }
  cout<<endl;
}
main()
{
  Node *head = NULL;
  Node *tail = NULL;
 int val;
 while(true){
  cin>>val;
  if(val == -1)
    break;
 }
    for(Node *i = head; i->next != NULL; i = i->next){
    cout<<i->val;
  // for(Node* j = i->next; j->next != NULL; j=j->next){
  //   if(i->val < j->val){
  //     swap(i->val,j->val);
  //     cout<<i->val;
  //   }
  // }
 }
//  print_normal(head);
  return 0;
}