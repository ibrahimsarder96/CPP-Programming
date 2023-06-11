#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;
  int x = n/2;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++){
       if(x==i && x==j){
      cout<<"X";
       }
       else{
       if(i==j){
      cout<<"\\";
      } 
       if(i+j==n-1){
      cout<<"/";
      }
      if(i!=j && i+j!=n-1){
      cout<<" ";
      }
     }
    }
    cout<<endl;
  }
  return 0;
}