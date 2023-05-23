#include<bits/stdc++.h>
using namespace std;
main()
{
  char x;
  cin>>x;
  if(x>='A' &&  x<='Z')
  { 
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
  }
  else if(x>='a' &&  x<='z')
  { 
    cout<<"ALPHA"<<endl<<"IS SMALL";
  }
  else{
    cout<<"IS DIGIT";
  }
  return 0;
}