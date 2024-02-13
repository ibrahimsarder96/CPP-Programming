#include<bits/stdc++.h>
using namespace std;
class myQueue
{
  public:
  list<int> l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_front();
  }
  int front()
  {
    return l.front();
  }
  int size()
  {
    return l.size();
  }
  bool empty()
  {
    return l.empty();
  }
};
main()
{
   myQueue q;
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    int v;
    cin>>v;
    q.push(v);
  }
  while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
  }
  return 0;
}