#include<bits/stdc++.h>
using namespace std;
class Person{
  public:
  string name;
  int age;
  Person(string name, int age){
    // this key word use in constructor two type way 
    this->name=name;  // type ----1
    (*this).age=age;  // type ----2
  }
};
main()
{
  Person* rafi = new Person("Rafi", 20);
  Person* rabbi = new Person("Rabbi", 18);
  *rafi=*rabbi;
  delete rabbi;
  cout<<rafi->name<<" "<<rafi->age;
  return 0;
}