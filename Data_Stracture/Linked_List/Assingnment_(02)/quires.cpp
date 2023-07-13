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
void  insert_at_position(Node* head, int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i = 1; i < pos - 1; i++){
      cout<<tmp->val;
      tmp = tmp -> next;
        return;
      }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
// insert head and tail
// void insert_head_tail(Node *head, Node* tail, int v){
//       Node* newNode = new Node(v);
//       if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         cout<<head->val<<" "<<tail->val<<endl;
//         return;
//       }
//       tail->next = newNode;
//       tail = newNode;
// }
// // print function
// void print_linked_list(Node* &head){
//   Node* tmp = head;
//   while(tmp != NULL){
//     cout<<tmp->val<<" "<<tmp->next->val;
//     tmp=tmp->next;
//   }
//   cout<<endl;
// }
// void insert (int p,int val){
//   cout<<p<<" "<<val<<endl;
// }

main()
{
  Node* head = NULL;
  Node* tail = NULL; 
  int q;
  cin>>q;
  while(q--){
    int p, va;
    cin>>p>>va;
    if(p==0){
     insert_at_position(head,p, va);
    //  print_linked_list(head);
    }
    if(p==1){
     insert_at_position(head,p, va);
    //  print_linked_list(head);
    }
    
  }

  return 0;
}