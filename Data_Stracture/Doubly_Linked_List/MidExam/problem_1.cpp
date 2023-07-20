#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
          this->val=val;
          this-> next = NULL;
          this-> prev = NULL;
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
void  print_reverse(Node* tail){
  Node* tmp = tail;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp = tmp->prev;
    return;
  }
  cout<<endl;
}
// tail insert-----------
 void insert_tail(Node *&head, Node *&tail, int val){
  Node *newNode = new Node(val);
  if(tail == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
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
  print_normal(head);
  print_reverse(tail);
  insert_tail(head,tail,val);
 }

  return 0;
}