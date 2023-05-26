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
  Person *jack = new Person(5.7, 26, "Jack");
  Person *smith = new Person(5.6, 28, "Smith");
  if((*jack).age>(*smith).age){
    cout<<(*jack).name<<endl;
  }
  else{
    cout<<(*smith).name<<endl;
  }
  return 0;
}