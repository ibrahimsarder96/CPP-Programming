#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* next;
        Node(int val){
          this-> val= val;
          this-> next = NULL;
        }
      };

// insert tail function-----------
void insert_at_tail(Node* &head, int v){
  Node* newNode = new Node(v);
  if(head == NULL){ // at first come node then it is head
    head = newNode;
    return; // return korte hobe
  }
  Node* tmp = head;
  while(tmp->next != NULL){
    tmp = tmp -> next;
  }
  tmp -> next = newNode;   // tmp ekhon last node e
}

// Node print_linked_list fuction----------------
Node* print_linked_list(Node* head){
  // cout<<head->val;
  if(head == NULL) return head;  // head is null then return
  Node* tmp = head;
  if(tmp->next == NULL){
    cout<<tmp->val;
  }
  while(tmp->next != NULL ){ 
    cout<<tmp->val<<" ";
    if(tmp->val == tmp->next->val){
       cout<<tmp->val<<" ";
      tmp->next = tmp->next->next;
    }
    if(tmp->next == NULL) break;
    else if(tmp->val != tmp->next->val){
    }
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
  if(val == -1) break;
   insert_at_tail(head,val);
 }
 for(Node*i = head; i->next != NULL; i = i->next){
  for(Node*j = i->next; j != NULL; j = j->next){
    if(i->val > j->val){
      swap(i->val, j->val);
    }
  }
 }
//  duplicate_delete(head);
 print_linked_list(head);
  return 0;
}