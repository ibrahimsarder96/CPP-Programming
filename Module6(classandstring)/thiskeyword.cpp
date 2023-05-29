#include<bits/stdc++.h>
using namespace std;
class Person{
  public:
  string name;
  int age;
  Person(string name, int age)
  {
    this->name=name;  // type ----1
    (*this).age=age;  // type ----2
  }
  void hello()
  {
    cout<<"Hello"<<endl;
  }
};
main()
{
  Person rafi("Rafi", 30);
  rafi.hello();
  cout<<rafi.name<<" "<<rafi.age;
  return 0;
}