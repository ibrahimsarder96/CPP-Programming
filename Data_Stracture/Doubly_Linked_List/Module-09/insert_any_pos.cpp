#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
          this->val = val;
          this-> next = NULL;
          this-> prev = NULL;
        }
};

void insert_any_pos(Node* head, int pos, int val){
  Node* newNode = new Node(val);
  Node* tmp = head;
  for(int i = 1; i < pos - 1; i++){
    tmp = tmp->next;
  }
  newNode->next = tmp->next;
  tmp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = tmp;
}
int size(Node* head){
  Node* tmp = head;
  int count = 0;
  while(tmp != NULL){
    tmp = tmp->next;
    count++;
  }
  return count;
}
void normal_print(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp = tmp->next;
  }
  cout<<endl;
}
main()
{
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* tail = c;

  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  b->next = c;
  c->prev = b;
  int pos, val;
  cin>> pos>> val;
  if(pos >= size(head)){
    cout<<"invalid" <<endl;
  }else{
   insert_any_pos(head, pos, val);
  }
   normal_print(head);
  return 0;
}