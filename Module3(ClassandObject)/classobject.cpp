#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  char name[100];
  int roll;
  char section;
};
main()
{
  Student ibrahim;
  ibrahim.roll = 10;
  ibrahim.section = 'A';
  char nm[100] = "rafi";
  strcpy(ibrahim.name,nm);

  Student jeni;
  jeni.roll = 101;
  jeni.section = 'A';
  char name[100] = "rafi";
  strcpy(jeni.name,name);
  cout<<jeni.roll;
  return 0;
}