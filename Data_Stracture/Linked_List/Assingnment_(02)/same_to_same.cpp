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
// insert head and tail
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
// print function
int print_linked_list(Node* head1, Node*head2){
  Node* tmp1 = head1;
  Node* tmp2 = head2;
  int flag = 0;
  while(tmp1 != NULL && tmp2 != NULL){
    if((tmp1 != NULL) != (tmp2 != NULL)){
      flag=1;
      return flag;
    }
    // cout<<tmp1->val<<" ";
    // cout<<endl;
    // cout<<tmp2->val<<" ";
    tmp1=tmp1->next;
    tmp2=tmp2->next;
  
  }
  cout<<endl;
}

main()
{
  Node* head1 = NULL;
  Node* head2 = NULL;
  Node* tail = NULL;
  int val1;
  int flag = 0;
  while(true){
    cin>>val1;
    if(val1 == -1){
      break;
    } 
    insert_head_tail(head1,tail,val1);
  }
  cout<<endl;
  int val2;
  while(true){
    cin>>val2;
    if(val2 == -1){
      break;
    } 
     insert_head_tail(head2,tail,val2);
  }
  int ans = print_linked_list(head1, head2);
  cout<<ans;
  // if(ans == 1){
  //   cout<<"YES";
  // }else{
  //   cout<<"NO";
  // }
  return 0;
}