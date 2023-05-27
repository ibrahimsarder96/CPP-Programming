#include<bits/stdc++.h>
using namespace std;
main()
{
  string s;
  cin>>s;
  // general process----------
  // for(int i = 0; i < s.size(); i++)
  // {
  //   cout<<s[i]<<endl;
  // }
  // iterator process--------------
  for(auto it=s.begin();it<s.end();it++)
  {
    cout<<*it<<endl;
  }
  return 0;
}