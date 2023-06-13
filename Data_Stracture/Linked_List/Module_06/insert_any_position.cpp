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
void print_linked_list (Node* head){
  cout<<"Your Linked List: ";
  Node* tmp = head;
  while(tmp != NULL){
    cout<<tmp->val<<" ";
    tmp = tmp -> next;
  }
  cout<<endl;
}
// Insert any position---------------
void  insert_at_position(Node* head, int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i = 1; i < pos - 1; i++){
      tmp = tmp -> next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<endl<<"Insert at position"<<pos<<endl<<endl;
}

main()
{
  Node* head = NULL; // first head NULL takbe

  while(true){
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: Print Linked List"<<endl;
    cout<<"Option 3: Insert any Position"<<endl;
    cout<<"Option 4: Terminated"<<endl;
    int op;
    cin>>op;
    if(op == 1){
      cout<<"Please enter value: ";
      int v;
      cin>>v;
      insert_at_tail(head, v);
   }
   else if(op == 2){
    print_linked_list(head);
   }
   else if(op == 3){
    int pos,v;
    cout<<"Enter Position: ";
    cin>>pos,v;
    cout<<"Enter value: ";
    cin>> v;
    insert_at_position(head, pos, v);
   }
   else if(op == 4){
    break;
   }
  }
  return 0;
}