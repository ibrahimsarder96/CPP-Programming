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
// insert head and tail----------------
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
// singly linked list count length---------------
int countLength(Node* head){
  int cnt = 0;
  Node* tmp = head;
  while(tmp != NULL){
    cnt++;
    tmp=tmp->next;
  }
  return cnt;
}
// singly linked list mid value-----------
void find_mid(Node* head){
  int size = countLength(head);
  int mid = (size+1) / 2;
  Node* tmp = head;
  for(int i = 0; i < mid - 1; i++){
    tmp= tmp->next;
  }
  if(size % 2 == 0){
    cout<<tmp->val<<" "<<tmp->next->val<<endl;
  }
  else{
    cout<<tmp->val<<endl;
  }
}

main()
{
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while(true){
    cin>>val;
    if(val == -1){
      break;
    }  
     insert_head_tail(head,tail,val);
  }
  // descending order sort-----------------
  for(Node* i = head; i->next != NULL; i = i->next){
    for(Node* j = i->next; j != NULL; j = j->next){
      if(i->val < j->val){
        swap(i->val,j->val);
      }
    }
  }
  countLength(head);
  find_mid(head);
  return 0;
}