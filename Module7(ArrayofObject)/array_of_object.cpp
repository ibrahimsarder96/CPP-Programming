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
  for(int i = 0; i < 3; i++)
  {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
  }
  return 0;
}