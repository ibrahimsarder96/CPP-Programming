#include<bits/stdc++.h>
using namespace std;

class Student{
public:
  string name;
  int roll;
  int mark;
};
bool cm(Student a, Student b){
  if(a.mark > b.mark) return true;
  else return false;
}
main()
{
  Student a[3];
  for(int i = 0; i < 3; i++){
    getline(cin,a[i].name);
    cin>>a[i].roll>>a[i].mark;
    cin.ignore();
  }
  // sort function---------
  sort(a, a+3, cm);
  for(int i = 0; i < 3; i++)
  {
    cout<<a[2].name<<" "<<a[2].roll<<" "<<a[2].mark<<endl;
  }
  return 0;
}