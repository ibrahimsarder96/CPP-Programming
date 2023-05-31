#include<bits/stdc++.h>
using namespace std;

class Student{
public:
  string name;
  int roll;
  int mark;
};
main()
{
  Student a[3];
  for(int i = 0; i < 3; i++){
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].mark;
    cin.ignore();
  }
  Student mx;
  mx.mark=INT_MIN;
  for(int i = 0; i < 3; i++){
    if(a[i].mark>mx.mark){
      mx=a[i];
    }
  }
  Student mn;
  mn.mark=INT_MAX;
  for(int i = 0; i < 3; i++){
    if(a[i].mark<mn.mark){
      mn=a[i];
    }
  }
  cout<<mx.name<<endl;
  cout<<mn.name;
  return 0;
}