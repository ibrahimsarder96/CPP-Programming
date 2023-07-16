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
void insert_normal(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
  cout<<endl;
}
void insert_reverse(Node* tail){
  Node* tmp = tail;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
  }
  cout<<endl;
}
void insert_at_position(Node* head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node* tmp = head;
  for(int i = 0; i < pos; i++){
    tmp = tmp->next;
  }
  newNode->next = tmp->next;  // 100 -> 30
  tmp->next = newNode;  // 20 -> 100
  newNode->next->prev = newNode; // 100 <- 30
  newNode->prev = tmp; // 20 <- 100
}
// count----------
 int size(Node *head){
  Node *tmp =  head;
  int cnt = 0;
  while(tmp != NULL){
    cnt++;
    tmp= tmp->next;
  }
  return cnt;
 }
 // head insert-----------
 void insert_head(Node *&head, Node *&tail, int val){
  Node *newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
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
  // Node* head = new Node(10);
  // Node* a = new Node(20);
  // Node* b = new Node(30);
  // Node* c = new Node(40);
  // Node* tail = c;

  // connection----------
  // head->next=a;
  // a->prev = head;
  // a->next = b;
  // b->prev = a;
  // b->next = c;
  // c->prev = b;
  int pos, val;
  cin>>pos>>val;
  insert_tail(head,tail,val);
  // if(pos ==  0){
  //   insert_head(head,tail,val);
  // }
  // else if(pos >=size(head)){
  //   cout<<"Invalid"<<endl;
  // }
  // else{
  //    insert_at_position(head, 1, 100);
  // }
 
  insert_normal(head);
  insert_reverse(tail);
  return 0;
}