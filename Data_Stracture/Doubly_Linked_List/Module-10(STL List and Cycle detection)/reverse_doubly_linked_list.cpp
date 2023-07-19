#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* prev;
        Node* next;
        Node(int val){
          this->val=val;
          this-> prev = NULL;
          this-> next = NULL;
        }
};
// normal print function---------------------
void print_normal(Node *head){
    Node* tmp = head;
    while(tmp != NULL){
      cout<<tmp->val<<" ";
      tmp = tmp->next;
    }
    cout<<endl;
}
void reverse(Node* head, Node* tail){
  Node* i = head;
  Node* j = tail;
  while(i != j && i->next != j){
    swap(i->val, j->val);
    i = i->next;
    j = j->prev;
  }
}

main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *tail = b; // tail stack rakte hobe

  // connection----------Node
  head->next=a;
  a->prev=head;
  a->next=b;
  b->prev=a;
  reverse(head, tail);
  print_normal(head);

  return 0;
}