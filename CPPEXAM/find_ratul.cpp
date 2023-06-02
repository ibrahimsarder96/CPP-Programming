#include<bits/stdc++.h>
using namespace std;
main()
{
  string s;
  getline(cin, s);
  stringstream ss;
  ss<<s;
  string word;
  int cnt = 0;
  while(ss>>word)
  {
   if(word=="Ratul")
    {
      cnt++;
    }
  }
  if(cnt==1){
     cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}