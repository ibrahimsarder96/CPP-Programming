#include<bits/stdc++.h>
using namespace std;
class Students{
  public:
  string nm;
  int cls;
  string s;
  int id;
};
main()
{
  int n;
  cin>>n;
  Students a[n];
  for(int i = 0; i < n; i++)
  {
    cin>>a[i].nm;
    cin>>a[i].cls;
    cin>>a[i].s;
    cin>>a[i].id;
  }
  if(n>0){
        for(int j = n - 1; j >= 0; j--){
        cout<<a[j].id<<endl;
  }
   for(int i = 0; i < n; i++)
  {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<endl;  
  }
     }
 
  return 0;
}