#include<bits/stdc++.h>
using namespace std;
class Person{
  public:
  char name[100];
  float height;
  int age;
  Person(float h, int a, char*n){
    height=h;
    age=a;
    strcpy(name,n);
  }
};
main()
{
  Person *jack = new Person(5.3, 21, "Jack");
  Person *smith = new Person(5.6, 24, "Smith");
  cout<<(*jack).name<<endl;
  cout<<jack->height<<endl;
  cout<<(*jack).age<<endl;
  return 0;
}