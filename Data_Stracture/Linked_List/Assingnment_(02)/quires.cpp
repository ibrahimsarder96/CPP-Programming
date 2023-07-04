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
// Insert any position---------------
// void  insert_at_position(Node* head, int pos, int v){
//     Node* newNode = new Node(v);
//     Node* tmp = head;
//     for(int i = 1; i < pos - 1; i++){
//       tmp = tmp -> next;
//         return;
//       }
//     newNode->next = tmp->next;
//     tmp->next = newNode;
// }
// // insert head and tail
void insert_head_tail(Node *&head, Node* &tail, int v){
      Node* newNode = new Node(v);
      if(head == NULL){
        head = newNode;
        tail = newNode;
        cout<<head<<" "<<tail;
        return;
      }
      tail->next = newNode;
      tail = newNode;
}
// // print function
void print_linked_list(Node* &head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<<tmp->val<<" "<<tmp->next->val;
    tmp=tmp->next;
  }
  cout<<endl;
}

main()
{
  Node* head = NULL;
  Node* tail = NULL; 
  int n;
  cin>>n;
  for(int i =  0; i <= n; i++){
   int pos;
   cin>>pos;
   if(pos == 0){
    int v;
    cin>>v;
    cout<<pos<<" "<<v;
        // insert_at_position(head, pos, v);
        insert_head_tail(head, tail, v);
   }
   else if(pos == 1){
    int v;
    cin>>v;
    cout<<pos<<" "<<v;
    // insert_at_position(head, pos, v);
    insert_head_tail(head, tail, v);
   }
    print_linked_list(head);
  }

  return 0;
}