#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  string name;
  int id;
  string department;
  int marks1;
  int marks2;
  Student(string nm, int i, string d, int mrk1, int mrk2)
  {
    name=nm;
    id=i;
    department=d;
    marks1=mrk1;
    marks2=mrk2;
  }
  void hello()
  {
    cout<<name<<" "<<id;
  }
  int total_marks()
  {
    return marks1 + marks2;
  }
};
main()
{
  Student rabbi ("Rabbi", 101, "CSE", 80, 90);
 
  cout<<rabbi.total_marks()<<endl;
  rabbi.hello();
  return 0;
}