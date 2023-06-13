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
// Insert head----------------
void insert_at_head(Node* &head, int v){
 Node* newNode = new Node(v);
 newNode -> next = head;
 head = newNode;
 cout<<endl<<"Insert at Head"<<endl;
}
// Delete Node---------------------
void delete_from_postion(Node* head, int pos){
  Node* tmp = head;
  for(int i = 1; i < pos-1; i++){
    tmp = tmp -> next;
  }
  Node* deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  delete deleteNode;
}

main()
{
  Node* head = NULL; // first head NULL takbe
  while(true){
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: Print Linked List"<<endl;
    cout<<"Option 3: Insert any Position"<<endl;
    cout<<"Option 4: Insert Head"<<endl;
    cout<<"Option 5: Delete Node"<<endl;
    cout<<"Option 6: Terminated"<<endl;
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
    if(pos == 0){
      insert_at_head(head, v);
    }else{
      insert_at_position(head, pos, v);
    }
   }
   else if(op == 4){
    int v;
    cout<<"Enter value: ";
    cin>>v;
    insert_at_head(head, v);
   }
   else if(op == 5){
    int pos;
    cout<<"Enter Position: ";
    cin>>pos;
    delete_from_postion(head, pos);
   }
   else if(op == 6){
    break;
   }
  }
  return 0;
}