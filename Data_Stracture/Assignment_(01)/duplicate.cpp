#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
   bool flag = false;
  //  sort(a,a+n);
  for(int i = 0; i < n - 1; i++)
  {
   for(int j = i + 1; j < n; j++){
    // cout<<a[i];
     if(a[i]==a[j]){
      flag=true;
   }
   }
  }
   if(flag==true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  return 0;
}