#include<bits/stdc++.h>
using namespace std;
main()
{
  int a;
  cin>>a;
  vector<int> v(a);
  for(int i = 0; i<a; i++)
  {
    cin>>v[i];
  }
  int b;
  cin>>b;
  vector<int> v2(b);
  for(int i = 0; i<b; i++)
  {
    cin>>v2[i];
  }
  int k;
  cin>>k;
  v.insert(v.begin() + k, v2.begin(), v2.end());
  for(int x: v)
  {
    cout<<x<<" ";
  }
  return 0;
}